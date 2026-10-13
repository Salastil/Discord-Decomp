package com.discord.image.color_quantizer;

import com.discord.image.color_quantizer.ColorCutQuantizer;
import java.util.Comparator;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Comparator {
    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        int VBOX_COMPARATOR_VOLUME$lambda$2;
        VBOX_COMPARATOR_VOLUME$lambda$2 = ColorCutQuantizer.VBOX_COMPARATOR_VOLUME$lambda$2((ColorCutQuantizer.Vbox) obj, (ColorCutQuantizer.Vbox) obj2);
        return VBOX_COMPARATOR_VOLUME$lambda$2;
    }
}
