package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNPlainTextManagerInterface;

/* loaded from: classes3.dex */
public class RNPlainTextManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNPlainTextManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNPlainTextManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1550943582:
                if (str.equals(ViewProps.FONT_STYLE)) {
                    c6 = 0;
                    break;
                }
                break;
            case -1329887265:
                if (str.equals(ViewProps.NUMBER_OF_LINES)) {
                    c6 = 1;
                    break;
                }
                break;
            case -1224696685:
                if (str.equals(ViewProps.FONT_FAMILY)) {
                    c6 = 2;
                    break;
                }
                break;
            case -1065511464:
                if (str.equals(ViewProps.TEXT_ALIGN)) {
                    c6 = 3;
                    break;
                }
                break;
            case -746936125:
                if (str.equals("hasLetterSpacing")) {
                    c6 = 4;
                    break;
                }
                break;
            case -734428249:
                if (str.equals(ViewProps.FONT_WEIGHT)) {
                    c6 = 5;
                    break;
                }
                break;
            case -515807685:
                if (str.equals(ViewProps.LINE_HEIGHT)) {
                    c6 = 6;
                    break;
                }
                break;
            case -407229137:
                if (str.equals(ViewProps.ALLOW_FONT_SCALING)) {
                    c6 = 7;
                    break;
                }
                break;
            case -85337091:
                if (str.equals("experiment")) {
                    c6 = '\b';
                    break;
                }
                break;
            case 3556653:
                if (str.equals("text")) {
                    c6 = '\t';
                    break;
                }
                break;
            case 94842723:
                if (str.equals(ViewProps.COLOR)) {
                    c6 = '\n';
                    break;
                }
                break;
            case 117406407:
                if (str.equals("fontVariationSettings")) {
                    c6 = 11;
                    break;
                }
                break;
            case 365601008:
                if (str.equals(ViewProps.FONT_SIZE)) {
                    c6 = '\f';
                    break;
                }
                break;
            case 548921173:
                if (str.equals(ViewProps.MAX_FONT_SIZE_MULTIPLIER)) {
                    c6 = '\r';
                    break;
                }
                break;
            case 830763696:
                if (str.equals("lineHeightClippingIos")) {
                    c6 = 14;
                    break;
                }
                break;
            case 1327548607:
                if (str.equals("textTransform")) {
                    c6 = 15;
                    break;
                }
                break;
            case 1806129616:
                if (str.equals(ViewProps.ELLIPSIZE_MODE)) {
                    c6 = 16;
                    break;
                }
                break;
            case 1869416814:
                if (str.equals(ViewProps.TEXT_ALIGN_VERTICAL)) {
                    c6 = 17;
                    break;
                }
                break;
            case 2008872246:
                if (str.equals(ViewProps.FONT_VARIANT)) {
                    c6 = 18;
                    break;
                }
                break;
            case 2020113146:
                if (str.equals(ViewProps.INCLUDE_FONT_PADDING)) {
                    c6 = 19;
                    break;
                }
                break;
            case 2031616849:
                if (str.equals(ViewProps.TEXT_DECORATION_LINE)) {
                    c6 = 20;
                    break;
                }
                break;
            case 2111078717:
                if (str.equals(ViewProps.LETTER_SPACING)) {
                    c6 = 21;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNPlainTextManagerInterface) this.mViewManager).setFontStyle(t5, obj != null ? (String) obj : null);
                break;
            case 1:
                ((RNPlainTextManagerInterface) this.mViewManager).setNumberOfLines(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 2:
                ((RNPlainTextManagerInterface) this.mViewManager).setFontFamily(t5, obj != null ? (String) obj : null);
                break;
            case 3:
                ((RNPlainTextManagerInterface) this.mViewManager).setTextAlign(t5, (String) obj);
                break;
            case 4:
                ((RNPlainTextManagerInterface) this.mViewManager).setHasLetterSpacing(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 5:
                ((RNPlainTextManagerInterface) this.mViewManager).setFontWeight(t5, obj != null ? (String) obj : null);
                break;
            case 6:
                ((RNPlainTextManagerInterface) this.mViewManager).setLineHeight(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 7:
                ((RNPlainTextManagerInterface) this.mViewManager).setAllowFontScaling(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case '\b':
                ((RNPlainTextManagerInterface) this.mViewManager).setExperiment(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\t':
                ((RNPlainTextManagerInterface) this.mViewManager).setText(t5, obj != null ? (String) obj : null);
                break;
            case '\n':
                ((RNPlainTextManagerInterface) this.mViewManager).setColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 11:
                ((RNPlainTextManagerInterface) this.mViewManager).setFontVariationSettings(t5, obj != null ? (String) obj : null);
                break;
            case '\f':
                ((RNPlainTextManagerInterface) this.mViewManager).setFontSize(t5, obj == null ? 14.0f : ((Double) obj).floatValue());
                break;
            case '\r':
                ((RNPlainTextManagerInterface) this.mViewManager).setMaxFontSizeMultiplier(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 14:
                ((RNPlainTextManagerInterface) this.mViewManager).setLineHeightClippingIos(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 15:
                ((RNPlainTextManagerInterface) this.mViewManager).setTextTransform(t5, (String) obj);
                break;
            case 16:
                ((RNPlainTextManagerInterface) this.mViewManager).setEllipsizeMode(t5, (String) obj);
                break;
            case 17:
                ((RNPlainTextManagerInterface) this.mViewManager).setTextAlignVertical(t5, (String) obj);
                break;
            case 18:
                ((RNPlainTextManagerInterface) this.mViewManager).setFontVariant(t5, (ReadableArray) obj);
                break;
            case 19:
                ((RNPlainTextManagerInterface) this.mViewManager).setIncludeFontPadding(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 20:
                ((RNPlainTextManagerInterface) this.mViewManager).setTextDecorationLine(t5, obj != null ? (String) obj : null);
                break;
            case 21:
                ((RNPlainTextManagerInterface) this.mViewManager).setLetterSpacing(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
