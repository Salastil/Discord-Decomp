package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.EmojiPickerViewManagerInterface;

/* loaded from: classes3.dex */
public class EmojiPickerViewManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & EmojiPickerViewManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public EmojiPickerViewManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: receiveCommand */
    public void kotlinCompat$receiveCommand(T t5, String str, ReadableArray readableArray) {
        str.getClass();
        switch (str) {
            case "scrollToHeaderIndex":
                ((EmojiPickerViewManagerInterface) this.mViewManager).scrollToHeaderIndex(t5, readableArray.getInt(0), readableArray.getBoolean(1));
                break;
            case "scrollingEnabled":
                ((EmojiPickerViewManagerInterface) this.mViewManager).scrollingEnabled(t5, readableArray.getBoolean(0));
                break;
            case "refreshEmojis":
                ((EmojiPickerViewManagerInterface) this.mViewManager).refreshEmojis(t5);
                break;
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1354792126:
                if (str.equals("config")) {
                    c6 = 0;
                    break;
                }
                break;
            case -1275922107:
                if (str.equals("useTier0UpsellContent")) {
                    c6 = 1;
                    break;
                }
                break;
            case 90130308:
                if (str.equals(ViewProps.PADDING_TOP)) {
                    c6 = 2;
                    break;
                }
                break;
            case 202355100:
                if (str.equals(ViewProps.PADDING_BOTTOM)) {
                    c6 = 3;
                    break;
                }
                break;
            case 1237853588:
                if (str.equals("emojiMargin")) {
                    c6 = 4;
                    break;
                }
                break;
            case 1685934352:
                if (str.equals("emojiData")) {
                    c6 = 5;
                    break;
                }
                break;
            case 1686389095:
                if (str.equals("emojiSize")) {
                    c6 = 6;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((EmojiPickerViewManagerInterface) this.mViewManager).setConfig(t5, (ReadableMap) obj);
                break;
            case 1:
                ((EmojiPickerViewManagerInterface) this.mViewManager).setUseTier0UpsellContent(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 2:
                ((EmojiPickerViewManagerInterface) this.mViewManager).setPaddingTop(t5, obj != null ? ((Double) obj).floatValue() : Float.NaN);
                break;
            case 3:
                ((EmojiPickerViewManagerInterface) this.mViewManager).setPaddingBottom(t5, obj != null ? ((Double) obj).floatValue() : Float.NaN);
                break;
            case 4:
                ((EmojiPickerViewManagerInterface) this.mViewManager).setEmojiMargin(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 5:
                ((EmojiPickerViewManagerInterface) this.mViewManager).setEmojiData(t5, (ReadableMap) obj);
                break;
            case 6:
                ((EmojiPickerViewManagerInterface) this.mViewManager).setEmojiSize(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
