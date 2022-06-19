using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * The UI which pops up when switching to the gallery view
 */ 
public class GalleryUI : MonoBehaviour, IGlobalContextSubscriber
{
    /*
     * In the future, Red will indicate problematic marking or photos (which obstruct a successfull intersection.
     * Yellow will indicate missing markings instead.
     */

    // bad = red = no marking applied
    public readonly Color bad = new Color(1, 0, 0);

    // good = green = marking applied
    public readonly Color good = new Color(0, 1, 0);

    // missing = yellow     => -unused currently-
    public readonly Color missing = new Color(0.8f, 0.8f, 0);


    [SerializeField]
    private RawImage image;

    [SerializeField]
    private GameObject[] mainUI;

    [SerializeField]
    private ScreenDrawing_Display SD_display;

    [SerializeField]
    private Text galleryCount;

    [SerializeField]
    private RectTransform scrollbarContent;

    [SerializeField]
    private GameObject galleryImagePrefab;

    // show an image when it got selected from the scrollbar
    public void showImage(GalleryStorage.ImageMarking imageMarking)
    {
        image.gameObject.SetActive(true);
        image.texture = imageMarking.image;
        if(imageMarking.marking != null)
        {
            SD_display.showPoints(imageMarking.marking.ToArray());
        } else
        {
            SD_display.showPoints(new Vector3[0]);
        }
    }

    // reverts showImage()
    public void unshowImage()
    {
        SD_display.showPoints(new Vector3[0]);
        image.gameObject.SetActive(false);
    }

    public void update()
    {
        if(GlobalContextVariable.globalContextVariable == GlobalContextVariable.GlobalContextVariableValue.gallery)
        {
            foreach(var obj in mainUI) {
                obj.SetActive(true);
            }
        } else
        {
            foreach (var obj in mainUI)
            {
                obj.SetActive(false);
            }
            unshowImage();
        }
    }


    public void updateUI(List<GalleryStorage.ImageMarking> gallery, GalleryStorage galleryStorage)
    {
        // update text over the gallery button
        galleryCount.text = gallery.FindAll(im => im.marking != null && im.marking.Count >= 3).Count + " / " + gallery.Count;

        // delete all old images depicted in the scrollbar
        foreach (Transform child in scrollbarContent)
        {
            GameObject.Destroy(child.gameObject);
        }

        // add all images to the scrollbar
        int offset = 10;
        int index = 0;
        foreach (var image in gallery)
        {
            GameObject imageMarkingUIElement = Instantiate(galleryImagePrefab, scrollbarContent);
            imageMarkingUIElement.GetComponent<RectTransform>().anchoredPosition = new Vector2(offset, 0);
            offset += 60;
            imageMarkingUIElement.transform.GetChild(0).GetComponent<RawImage>().texture = image.image;
            GALLERY_IMAGE script = imageMarkingUIElement.GetComponent<GALLERY_IMAGE>();
            script.index = index++;
            script.gallery = galleryStorage;
            imageMarkingUIElement.GetComponent<Image>().color = image.marking == null ? bad : good;
        }
        scrollbarContent.sizeDelta = new Vector2(offset, scrollbarContent.rect.height);
    }
}
