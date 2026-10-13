package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNDatePickerManagerInterface;

/* loaded from: classes3.dex */
public class RNDatePickerManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNDatePickerManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNDatePickerManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1785411759:
                if (str.equals("buttonColor")) {
                    c6 = 0;
                    break;
                }
                break;
            case -1411282677:
                if (str.equals("is24hourSource")) {
                    c6 = 1;
                    break;
                }
                break;
            case -1339516167:
                if (str.equals("minuteInterval")) {
                    c6 = 2;
                    break;
                }
                break;
            case -1235930166:
                if (str.equals("dividerColor")) {
                    c6 = 3;
                    break;
                }
                break;
            case -1097462182:
                if (str.equals("locale")) {
                    c6 = 4;
                    break;
                }
                break;
            case -1063571914:
                if (str.equals("textColor")) {
                    c6 = 5;
                    break;
                }
                break;
            case -292758706:
                if (str.equals("timeZoneOffsetInMinutes")) {
                    c6 = 6;
                    break;
                }
                break;
            case 3076014:
                if (str.equals("date")) {
                    c6 = 7;
                    break;
                }
                break;
            case 3357091:
                if (str.equals("mode")) {
                    c6 = '\b';
                    break;
                }
                break;
            case 3417674:
                if (str.equals("open")) {
                    c6 = '\t';
                    break;
                }
                break;
            case 104069805:
                if (str.equals("modal")) {
                    c6 = '\n';
                    break;
                }
                break;
            case 110327241:
                if (str.equals("theme")) {
                    c6 = 11;
                    break;
                }
                break;
            case 110371416:
                if (str.equals(AlertFragment.ARG_TITLE)) {
                    c6 = '\f';
                    break;
                }
                break;
            case 344408077:
                if (str.equals("confirmText")) {
                    c6 = '\r';
                    break;
                }
                break;
            case 1007762652:
                if (str.equals("minimumDate")) {
                    c6 = 14;
                    break;
                }
                break;
            case 1685195246:
                if (str.equals("maximumDate")) {
                    c6 = 15;
                    break;
                }
                break;
            case 1888623303:
                if (str.equals("cancelText")) {
                    c6 = 16;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNDatePickerManagerInterface) this.mViewManager).setButtonColor(t5, obj != null ? (String) obj : null);
                break;
            case 1:
                ((RNDatePickerManagerInterface) this.mViewManager).setIs24hourSource(t5, (String) obj);
                break;
            case 2:
                ((RNDatePickerManagerInterface) this.mViewManager).setMinuteInterval(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 3:
                ((RNDatePickerManagerInterface) this.mViewManager).setDividerColor(t5, obj != null ? (String) obj : null);
                break;
            case 4:
                ((RNDatePickerManagerInterface) this.mViewManager).setLocale(t5, obj != null ? (String) obj : null);
                break;
            case 5:
                ((RNDatePickerManagerInterface) this.mViewManager).setTextColor(t5, obj != null ? (String) obj : null);
                break;
            case 6:
                ((RNDatePickerManagerInterface) this.mViewManager).setTimeZoneOffsetInMinutes(t5, obj != null ? (String) obj : null);
                break;
            case 7:
                ((RNDatePickerManagerInterface) this.mViewManager).setDate(t5, obj != null ? (String) obj : null);
                break;
            case '\b':
                ((RNDatePickerManagerInterface) this.mViewManager).setMode(t5, (String) obj);
                break;
            case '\t':
                ((RNDatePickerManagerInterface) this.mViewManager).setOpen(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\n':
                ((RNDatePickerManagerInterface) this.mViewManager).setModal(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 11:
                ((RNDatePickerManagerInterface) this.mViewManager).setTheme(t5, (String) obj);
                break;
            case '\f':
                ((RNDatePickerManagerInterface) this.mViewManager).setTitle(t5, obj != null ? (String) obj : null);
                break;
            case '\r':
                ((RNDatePickerManagerInterface) this.mViewManager).setConfirmText(t5, obj != null ? (String) obj : null);
                break;
            case 14:
                ((RNDatePickerManagerInterface) this.mViewManager).setMinimumDate(t5, obj != null ? (String) obj : null);
                break;
            case 15:
                ((RNDatePickerManagerInterface) this.mViewManager).setMaximumDate(t5, obj != null ? (String) obj : null);
                break;
            case 16:
                ((RNDatePickerManagerInterface) this.mViewManager).setCancelText(t5, obj != null ? (String) obj : null);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
