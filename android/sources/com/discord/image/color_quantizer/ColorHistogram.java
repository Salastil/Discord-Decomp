package com.discord.image.color_quantizer;

import com.rnlineargradient.LinearGradientManager;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0015\n\u0002\b\b\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\b\u0000\u0018\u0000 \u00112\u00020\u0001:\u0001\u0011B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0002\u001a\u00020\u0003H\u0002R\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\t\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\bR\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000e¨\u0006\u0012"}, d2 = {"Lcom/discord/image/color_quantizer/ColorHistogram;", "", "pixels", "", "<init>", "([I)V", LinearGradientManager.PROP_COLORS, "getColors", "()[I", "colorCounts", "getColorCounts", "numberOfColors", "", "getNumberOfColors", "()I", "countFrequencies", "", "Companion", "color_quantizer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ColorHistogram {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final int[] colorCounts;

    @NotNull
    private final int[] colors;
    private final int numberOfColors;

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0015\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002¨\u0006\b"}, d2 = {"Lcom/discord/image/color_quantizer/ColorHistogram$Companion;", "", "<init>", "()V", "countDistinctColors", "", "pixels", "", "color_quantizer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final int countDistinctColors(int[] pixels) {
            if (pixels.length < 2) {
                return pixels.length;
            }
            int i5 = pixels[0];
            int length = pixels.length;
            int i6 = 1;
            for (int i10 = 1; i10 < length; i10++) {
                int i11 = pixels[i10];
                if (i11 != i5) {
                    i6++;
                    i5 = i11;
                }
            }
            return i6;
        }

        private Companion() {
        }
    }

    public ColorHistogram(@NotNull int[] pixels) {
        Intrinsics.checkNotNullParameter(pixels, "pixels");
        Arrays.sort(pixels);
        int countDistinctColors = INSTANCE.countDistinctColors(pixels);
        this.numberOfColors = countDistinctColors;
        this.colors = new int[countDistinctColors];
        this.colorCounts = new int[countDistinctColors];
        countFrequencies(pixels);
    }

    private final void countFrequencies(int[] pixels) {
        if (pixels.length == 0) {
            return;
        }
        int i5 = 0;
        int i6 = pixels[0];
        this.colors[0] = i6;
        this.colorCounts[0] = 1;
        if (pixels.length == 1) {
            return;
        }
        int length = pixels.length;
        for (int i10 = 1; i10 < length; i10++) {
            int i11 = pixels[i10];
            if (i11 == i6) {
                int[] iArr = this.colorCounts;
                iArr[i5] = iArr[i5] + 1;
            } else {
                i5++;
                this.colors[i5] = i11;
                this.colorCounts[i5] = 1;
                i6 = i11;
            }
        }
    }

    @NotNull
    public final int[] getColorCounts() {
        return this.colorCounts;
    }

    @NotNull
    public final int[] getColors() {
        return this.colors;
    }

    public final int getNumberOfColors() {
        return this.numberOfColors;
    }
}
