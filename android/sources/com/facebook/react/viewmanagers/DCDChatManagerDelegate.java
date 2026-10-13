package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.DCDChatManagerInterface;

/* loaded from: classes3.dex */
public class DCDChatManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & DCDChatManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public DCDChatManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: receiveCommand */
    public void kotlinCompat$receiveCommand(T t5, String str, ReadableArray readableArray) {
        str.getClass();
        switch (str) {
            case "fadeIn":
                ((DCDChatManagerInterface) this.mViewManager).fadeIn(t5);
                break;
            case "clearRows":
                ((DCDChatManagerInterface) this.mViewManager).clearRows(t5, readableArray.getInt(0));
                break;
            case "scrollToBottom":
                ((DCDChatManagerInterface) this.mViewManager).scrollToBottom(t5, readableArray.getBoolean(0));
                break;
            case "scrollTo":
                ((DCDChatManagerInterface) this.mViewManager).scrollTo(t5, readableArray.getInt(0), readableArray.getBoolean(1), readableArray.getBoolean(2), readableArray.getInt(3));
                break;
            case "updateRows":
                ((DCDChatManagerInterface) this.mViewManager).updateRows(t5, readableArray.getString(0), readableArray.getBoolean(1), readableArray.getString(2), readableArray.getInt(3), readableArray.getBoolean(4), readableArray.getBoolean(5), readableArray.getBoolean(6));
                break;
            case "scrollIntoView":
                ((DCDChatManagerInterface) this.mViewManager).scrollIntoView(t5, readableArray.getInt(0), readableArray.getBoolean(1), readableArray.getBoolean(2));
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
            case -144215618:
                if (str.equals("alwaysRespectKeyboard")) {
                    c6 = 0;
                    break;
                }
                break;
            case 235487768:
                if (str.equals("adjustContentOffsetWithBounds")) {
                    c6 = 1;
                    break;
                }
                break;
            case 324962011:
                if (str.equals("roleStyle")) {
                    c6 = 2;
                    break;
                }
                break;
            case 627674869:
                if (str.equals("inverted")) {
                    c6 = 3;
                    break;
                }
                break;
            case 1020592613:
                if (str.equals("animateEmoji")) {
                    c6 = 4;
                    break;
                }
                break;
            case 1461735806:
                if (str.equals("channelId")) {
                    c6 = 5;
                    break;
                }
                break;
            case 1825598780:
                if (str.equals("HACK_fixModalInteraction")) {
                    c6 = 6;
                    break;
                }
                break;
            case 2010058734:
                if (str.equals("keyboardBackgroundColor")) {
                    c6 = 7;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((DCDChatManagerInterface) this.mViewManager).setAlwaysRespectKeyboard(t5, obj != null ? (Boolean) obj : null);
                break;
            case 1:
                ((DCDChatManagerInterface) this.mViewManager).setAdjustContentOffsetWithBounds(t5, obj != null ? (Boolean) obj : null);
                break;
            case 2:
                ((DCDChatManagerInterface) this.mViewManager).setRoleStyle(t5, (String) obj);
                break;
            case 3:
                ((DCDChatManagerInterface) this.mViewManager).setInverted(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 4:
                ((DCDChatManagerInterface) this.mViewManager).setAnimateEmoji(t5, obj != null ? (Boolean) obj : null);
                break;
            case 5:
                ((DCDChatManagerInterface) this.mViewManager).setChannelId(t5, obj != null ? (String) obj : null);
                break;
            case 6:
                ((DCDChatManagerInterface) this.mViewManager).setHACK_fixModalInteraction(t5, obj != null ? (Boolean) obj : null);
                break;
            case 7:
                ((DCDChatManagerInterface) this.mViewManager).setKeyboardBackgroundColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
