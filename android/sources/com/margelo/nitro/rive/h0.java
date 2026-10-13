package com.margelo.nitro.rive;

import android.util.Log;
import app.rive.runtime.kotlin.fonts.FontFallbackStrategy;
import app.rive.runtime.kotlin.fonts.FontHelper;
import app.rive.runtime.kotlin.fonts.Fonts;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;

/* loaded from: classes3.dex */
public final class h0 implements FontFallbackStrategy {
    @Override // app.rive.runtime.kotlin.fonts.FontFallbackStrategy
    public final List getFont(Fonts.Weight weight) {
        Map map;
        Map map2;
        Iterable<HybridFallbackFontSpec> iterable;
        Fonts.Weight weight2;
        byte[] bArr;
        Map map3;
        Intrinsics.checkNotNullParameter(weight, "weight");
        int weight3 = weight.getWeight();
        map = HybridRiveFontConfig.fontsByWeight;
        synchronized (map) {
            map2 = HybridRiveFontConfig.fontsByWeight;
            iterable = (List) map2.get(Integer.valueOf(weight3));
            if (iterable == null) {
                map3 = HybridRiveFontConfig.fontsByWeight;
                iterable = (List) map3.get(0);
                if (iterable == null) {
                    iterable = kotlin.collections.m0.f13512d;
                }
            }
        }
        ArrayList arrayList = new ArrayList();
        for (HybridFallbackFontSpec hybridFallbackFontSpec : iterable) {
            if (hybridFallbackFontSpec instanceof HybridDefaultFallbackFont) {
                weight2 = weight;
                bArr = FontHelper.INSTANCE.getFallbackFontBytes(new Fonts.FontOpts(null, null, weight2, null, 11, null));
            } else {
                weight2 = weight;
                if (hybridFallbackFontSpec instanceof HybridFallbackFont) {
                    bArr = ((HybridFallbackFont) hybridFallbackFontSpec).getFontBytes();
                } else {
                    Log.e("RiveFonts", "Unknown fallback font spec type: " + Reflection.getOrCreateKotlinClass(hybridFallbackFontSpec.getClass()).getSimpleName());
                    bArr = null;
                }
            }
            if (bArr != null) {
                arrayList.add(bArr);
            }
            weight = weight2;
        }
        return arrayList;
    }
}
