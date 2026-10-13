package com.discord.react_fork_overrides.forks;

import a3.e;
import android.content.res.AssetManager;
import android.graphics.Typeface;
import android.graphics.fonts.Font;
import android.graphics.fonts.FontFamily;
import android.graphics.fonts.FontStyle;
import android.os.Build;
import app.rive.runtime.kotlin.fonts.Fonts;
import com.facebook.react.common.assets.CreateTypefaceObject;
import com.facebook.react.common.assets.ReactFontManager;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.StringsKt__StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\t\u001a\u00020\nJ\u0010\u0010\u000b\u001a\u00020\u00062\u0006\u0010\f\u001a\u00020\u0006H\u0002J\"\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u00062\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013H\u0002J+\u0010\u0014\u001a\u00020\u000e2\f\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013H\u0003¢\u0006\u0002\u0010\u0016R\u0016\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0007R\u000e\u0010\b\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"Lcom/discord/react_fork_overrides/forks/CustomFontFamilyOverride;", "", "<init>", "()V", "FILE_EXTENSIONS", "", "", "[Ljava/lang/String;", "FONTS_ASSET_PATH", "override", "", "toItalicFamilyName", StackTraceHelper.NAME_KEY, "createAssetTypeface", "Landroid/graphics/Typeface;", "fontFamilyName", "style", "", "assetManager", "Landroid/content/res/AssetManager;", "createAssetTypefaceWithFallbacks", "fontFamilyNames", "([Ljava/lang/String;ILandroid/content/res/AssetManager;)Landroid/graphics/Typeface;", "react_fork_overrides_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nCustomFontFamilyOverride.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CustomFontFamilyOverride.kt\ncom/discord/react_fork_overrides/forks/CustomFontFamilyOverride\n+ 2 ArraysJVM.kt\nkotlin/collections/ArraysKt__ArraysJVMKt\n*L\n1#1,150:1\n37#2:151\n36#2,3:152\n*S KotlinDebug\n*F\n+ 1 CustomFontFamilyOverride.kt\ncom/discord/react_fork_overrides/forks/CustomFontFamilyOverride\n*L\n37#1:151\n37#1:152,3\n*E\n"})
/* loaded from: classes.dex */
public final class CustomFontFamilyOverride {

    @NotNull
    private static final String FONTS_ASSET_PATH = "fonts/";

    @NotNull
    public static final CustomFontFamilyOverride INSTANCE = new CustomFontFamilyOverride();

    @NotNull
    private static final String[] FILE_EXTENSIONS = {".ttf", ".otf"};

    private CustomFontFamilyOverride() {
    }

    private final Typeface createAssetTypeface(String fontFamilyName, int style, AssetManager assetManager) {
        List split$default;
        if (fontFamilyName == null) {
            fontFamilyName = "";
        }
        split$default = StringsKt__StringsKt.split$default(fontFamilyName, new String[]{","}, false, 0, 6, null);
        String[] strArr = (String[]) split$default.toArray(new String[0]);
        int length = strArr.length;
        for (int i5 = 0; i5 < length; i5++) {
            strArr[i5] = StringsKt.b0(strArr[i5]).toString();
        }
        if (strArr.length > 1) {
            if (Build.VERSION.SDK_INT >= 29) {
                return createAssetTypefaceWithFallbacks(strArr, style, assetManager);
            }
            fontFamilyName = strArr[0];
        }
        if (strArr.length > 1 && Build.VERSION.SDK_INT < 29) {
            if ((style & 2) != 0) {
                fontFamilyName = toItalicFamilyName(fontFamilyName);
            }
            if ((style & 1) != 0) {
                fontFamilyName = x.l(x.l(x.l(fontFamilyName, ReactProgressBarViewManager.DEFAULT_STYLE, "Bold", true), "Medium", "Bold", true), "Semibold", "Bold", true);
            }
            fontFamilyName = x.l(x.l(fontFamilyName, "ItalicItalic", "Italic", true), "BoldBold", "Bold", true);
        }
        for (String str : FILE_EXTENSIONS) {
            String str2 = FONTS_ASSET_PATH + fontFamilyName + str;
            Intrinsics.checkNotNullExpressionValue(str2, "toString(...)");
            try {
                Typeface createFromAsset = Typeface.createFromAsset(assetManager, str2);
                Intrinsics.checkNotNull(createFromAsset);
                return createFromAsset;
            } catch (RuntimeException unused) {
            }
        }
        Typeface create = Typeface.create(fontFamilyName, style);
        Intrinsics.checkNotNullExpressionValue(create, "create(...)");
        return create;
    }

    private final Typeface createAssetTypefaceWithFallbacks(String[] fontFamilyNames, int style, AssetManager assetManager) {
        ArrayList arrayList = new ArrayList();
        int length = fontFamilyNames.length;
        for (int i5 = 0; i5 < length; i5++) {
            String str = fontFamilyNames[i5];
            if ((style & 2) != 0) {
                str = toItalicFamilyName(str);
            }
            if ((style & 1) != 0) {
                str = x.l(x.l(x.l(str, ReactProgressBarViewManager.DEFAULT_STYLE, "Bold", true), "Medium", "Bold", true), "Semibold", "Bold", true);
            }
            String l6 = x.l(x.l(str, "ItalicItalic", "Italic", true), "BoldBold", "Bold", true);
            for (String str2 : FILE_EXTENSIONS) {
                String str3 = FONTS_ASSET_PATH + l6 + str2;
                Intrinsics.checkNotNullExpressionValue(str3, "toString(...)");
                try {
                    Font build = new Font.Builder(assetManager, str3).build();
                    Intrinsics.checkNotNullExpressionValue(build, "build(...)");
                    FontFamily build2 = new FontFamily.Builder(build).build();
                    Intrinsics.checkNotNullExpressionValue(build2, "build(...)");
                    arrayList.add(build2);
                } catch (Throwable unused) {
                }
            }
        }
        if (arrayList.size() == 0) {
            return createAssetTypeface(fontFamilyNames[0], style, assetManager);
        }
        Typeface.CustomFallbackBuilder customFallbackBuilder = new Typeface.CustomFallbackBuilder(ah.a.f(arrayList.get(0)));
        int size = arrayList.size();
        for (int i6 = 1; i6 < size; i6++) {
            customFallbackBuilder.addCustomFallback(ah.a.f(arrayList.get(i6)));
        }
        String str4 = fontFamilyNames[0];
        Locale locale = Locale.ROOT;
        customFallbackBuilder.setStyle(new FontStyle(StringsKt.J(e.o(locale, "ROOT", fontFamilyNames[0], locale, "toLowerCase(...)"), "bold", 0, false, 6) > -1 ? ReactFontManager.TypefaceStyle.BOLD : ReactFontManager.TypefaceStyle.NORMAL, StringsKt.J(e.o(locale, "ROOT", str4, locale, "toLowerCase(...)"), Fonts.Font.STYLE_ITALIC, 0, false, 6) > -1 ? 1 : 0));
        Typeface build3 = customFallbackBuilder.build();
        Intrinsics.checkNotNullExpressionValue(build3, "build(...)");
        return build3;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Typeface override$lambda$0(CreateTypefaceObject createTypefaceObject) {
        return INSTANCE.createAssetTypeface(createTypefaceObject.getFontFamilyName(), createTypefaceObject.getStyle(), createTypefaceObject.getAssetManager());
    }

    private final String toItalicFamilyName(String name) {
        return StringsKt.D(name, "Italic", true) ? name : d.k(name, "Italic");
    }

    public final void override() {
        ReactFontManager.INSTANCE.setCreateAssetTypefaceOverride(new ah.a(25));
    }
}
