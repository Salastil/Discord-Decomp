package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNCSliderManagerInterface;

/* loaded from: classes3.dex */
public class RNCSliderManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNCSliderManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNCSliderManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1984141450:
                if (str.equals("vertical")) {
                    c6 = 0;
                    break;
                }
                break;
            case -1900655011:
                if (str.equals("maximumTrackTintColor")) {
                    c6 = 1;
                    break;
                }
                break;
            case -1736983259:
                if (str.equals("thumbImage")) {
                    c6 = 2;
                    break;
                }
                break;
            case -1681713095:
                if (str.equals("upperLimit")) {
                    c6 = 3;
                    break;
                }
                break;
            case -1021497397:
                if (str.equals("minimumTrackTintColor")) {
                    c6 = 4;
                    break;
                }
                break;
            case -981448432:
                if (str.equals("maximumTrackImage")) {
                    c6 = 5;
                    break;
                }
                break;
            case -877170387:
                if (str.equals(ViewProps.TEST_ID)) {
                    c6 = 6;
                    break;
                }
                break;
            case 3540684:
                if (str.equals("step")) {
                    c6 = 7;
                    break;
                }
                break;
            case 111972721:
                if (str.equals("value")) {
                    c6 = '\b';
                    break;
                }
                break;
            case 270940796:
                if (str.equals("disabled")) {
                    c6 = '\t';
                    break;
                }
                break;
            case 627674869:
                if (str.equals("inverted")) {
                    c6 = '\n';
                    break;
                }
                break;
            case 628733650:
                if (str.equals("accessibilityIncrements")) {
                    c6 = 11;
                    break;
                }
                break;
            case 718061361:
                if (str.equals("maximumValue")) {
                    c6 = '\f';
                    break;
                }
                break;
            case 1139400400:
                if (str.equals("trackImage")) {
                    c6 = '\r';
                    break;
                }
                break;
            case 1155548865:
                if (str.equals("accessibilityUnits")) {
                    c6 = 14;
                    break;
                }
                break;
            case 1168687382:
                if (str.equals("tapToSeek")) {
                    c6 = 15;
                    break;
                }
                break;
            case 1192487427:
                if (str.equals("minimumValue")) {
                    c6 = 16;
                    break;
                }
                break;
            case 1209133370:
                if (str.equals("lowerLimit")) {
                    c6 = 17;
                    break;
                }
                break;
            case 1329736439:
                if (str.equals("thumbSize")) {
                    c6 = 18;
                    break;
                }
                break;
            case 1333596542:
                if (str.equals("minimumTrackImage")) {
                    c6 = 19;
                    break;
                }
                break;
            case 1912319986:
                if (str.equals("thumbTintColor")) {
                    c6 = 20;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNCSliderManagerInterface) this.mViewManager).setVertical(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 1:
                ((RNCSliderManagerInterface) this.mViewManager).setMaximumTrackTintColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 2:
                ((RNCSliderManagerInterface) this.mViewManager).setThumbImage(t5, (ReadableMap) obj);
                break;
            case 3:
                ((RNCSliderManagerInterface) this.mViewManager).setUpperLimit(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 4:
                ((RNCSliderManagerInterface) this.mViewManager).setMinimumTrackTintColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 5:
                ((RNCSliderManagerInterface) this.mViewManager).setMaximumTrackImage(t5, (ReadableMap) obj);
                break;
            case 6:
                ((RNCSliderManagerInterface) this.mViewManager).setTestID(t5, obj != null ? (String) obj : null);
                break;
            case 7:
                ((RNCSliderManagerInterface) this.mViewManager).setStep(t5, obj != null ? ((Double) obj).doubleValue() : 0.0d);
                break;
            case '\b':
                ((RNCSliderManagerInterface) this.mViewManager).setValue(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case '\t':
                ((RNCSliderManagerInterface) this.mViewManager).setDisabled(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\n':
                ((RNCSliderManagerInterface) this.mViewManager).setInverted(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 11:
                ((RNCSliderManagerInterface) this.mViewManager).setAccessibilityIncrements(t5, (ReadableArray) obj);
                break;
            case '\f':
                ((RNCSliderManagerInterface) this.mViewManager).setMaximumValue(t5, obj != null ? ((Double) obj).doubleValue() : 0.0d);
                break;
            case '\r':
                ((RNCSliderManagerInterface) this.mViewManager).setTrackImage(t5, (ReadableMap) obj);
                break;
            case 14:
                ((RNCSliderManagerInterface) this.mViewManager).setAccessibilityUnits(t5, obj != null ? (String) obj : null);
                break;
            case 15:
                ((RNCSliderManagerInterface) this.mViewManager).setTapToSeek(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 16:
                ((RNCSliderManagerInterface) this.mViewManager).setMinimumValue(t5, obj != null ? ((Double) obj).doubleValue() : 0.0d);
                break;
            case 17:
                ((RNCSliderManagerInterface) this.mViewManager).setLowerLimit(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 18:
                ((RNCSliderManagerInterface) this.mViewManager).setThumbSize(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 19:
                ((RNCSliderManagerInterface) this.mViewManager).setMinimumTrackImage(t5, (ReadableMap) obj);
                break;
            case 20:
                ((RNCSliderManagerInterface) this.mViewManager).setThumbTintColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
