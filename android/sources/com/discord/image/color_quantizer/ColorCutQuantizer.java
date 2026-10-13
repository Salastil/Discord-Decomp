package com.discord.image.color_quantizer;

import android.graphics.Bitmap;
import android.graphics.Color;
import android.util.SparseIntArray;
import com.facebook.react.uimanager.ViewProps;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.PriorityQueue;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0014\n\u0000\n\u0002\u0010\u0015\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u001e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0000\u0018\u0000 (2\u00020\u0001:\u0002'(B\u001b\b\u0002\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u001e\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00100\u000f2\u0006\u0010\u0016\u001a\u00020\u00052\u0006\u0010\u0004\u001a\u00020\u0005H\u0002J\"\u0010\u0017\u001a\u00020\u00182\u0010\u0010\u0019\u001a\f\u0012\b\u0012\u00060\u001bR\u00020\u00000\u001a2\u0006\u0010\u001c\u001a\u00020\u0005H\u0002J \u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u00100\u000f2\u0010\u0010\u001e\u001a\f\u0012\b\u0012\u00060\u001bR\u00020\u00000\u001fH\u0002J \u0010 \u001a\u00020\u00182\u0006\u0010!\u001a\u00020\u00052\u0006\u0010\"\u001a\u00020\u00052\u0006\u0010#\u001a\u00020\u0005H\u0002J\u0010\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020\u0005H\u0002R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00100\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00100\u00128F¢\u0006\u0006\u001a\u0004\b\u0013\u0010\u0014¨\u0006)"}, d2 = {"Lcom/discord/image/color_quantizer/ColorCutQuantizer;", "", "colorHistogram", "Lcom/discord/image/color_quantizer/ColorHistogram;", "maxColors", "", "<init>", "(Lcom/discord/image/color_quantizer/ColorHistogram;I)V", "mTempHsl", "", "mColors", "", "mColorPopulations", "Landroid/util/SparseIntArray;", "mQuantizedColors", "", "Lcom/discord/image/color_quantizer/Swatch;", "quantizedColors", "", "getQuantizedColors", "()Ljava/util/List;", "quantizePixels", "maxColorIndex", "splitBoxes", "", "queue", "Ljava/util/PriorityQueue;", "Lcom/discord/image/color_quantizer/ColorCutQuantizer$Vbox;", "maxSize", "generateAverageColors", "vboxes", "", "modifySignificantOctet", "dimension", "lowIndex", "highIndex", "shouldIgnoreColor", "", ViewProps.COLOR, "Vbox", "Companion", "color_quantizer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nColorCutQuantizer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ColorCutQuantizer.kt\ncom/discord/image/color_quantizer/ColorCutQuantizer\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,391:1\n1#2:392\n*E\n"})
/* loaded from: classes.dex */
public final class ColorCutQuantizer {
    private static final float BLACK_MAX_LIGHTNESS = 0.05f;
    private static final int COMPONENT_BLUE = -1;
    private static final int COMPONENT_GREEN = -2;
    private static final int COMPONENT_RED = -3;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Comparator<Vbox> VBOX_COMPARATOR_VOLUME = new a();
    private static final float WHITE_MIN_LIGHTNESS = 0.95f;

    @NotNull
    private final SparseIntArray mColorPopulations;

    @NotNull
    private final int[] mColors;

    @NotNull
    private final List<Swatch> mQuantizedColors;

    @NotNull
    private final float[] mTempHsl;

    @Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0014\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\bH\u0007J\u0010\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013H\u0002J\u0010\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0015H\u0002J\u0010\u0010\u0016\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0015H\u0002J\u0010\u0010\u0017\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0015H\u0002J\u0010\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0015H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u0018\u0010\u0019\u001a\f\u0012\b\u0012\u00060\u001bR\u00020\f0\u001aX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001c"}, d2 = {"Lcom/discord/image/color_quantizer/ColorCutQuantizer$Companion;", "", "<init>", "()V", "BLACK_MAX_LIGHTNESS", "", "WHITE_MIN_LIGHTNESS", "COMPONENT_RED", "", "COMPONENT_GREEN", "COMPONENT_BLUE", "fromBitmap", "Lcom/discord/image/color_quantizer/ColorCutQuantizer;", "bitmap", "Landroid/graphics/Bitmap;", "maxColors", "shouldIgnoreColor", "", ViewProps.COLOR, "Lcom/discord/image/color_quantizer/Swatch;", "hslColor", "", "isBlack", "isWhite", "isNearRedILine", "VBOX_COMPARATOR_VOLUME", "Ljava/util/Comparator;", "Lcom/discord/image/color_quantizer/ColorCutQuantizer$Vbox;", "color_quantizer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private final boolean isBlack(float[] hslColor) {
            return hslColor[2] <= ColorCutQuantizer.BLACK_MAX_LIGHTNESS;
        }

        private final boolean isNearRedILine(float[] hslColor) {
            float f2 = hslColor[0];
            return 10.0f <= f2 && f2 <= 37.0f && hslColor[1] <= 0.82f;
        }

        private final boolean isWhite(float[] hslColor) {
            return hslColor[2] >= ColorCutQuantizer.WHITE_MIN_LIGHTNESS;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final boolean shouldIgnoreColor(Swatch color) {
            float[] hsl = color.getHsl();
            Intrinsics.checkNotNullExpressionValue(hsl, "getHsl(...)");
            return shouldIgnoreColor(hsl);
        }

        @NotNull
        public final ColorCutQuantizer fromBitmap(@NotNull Bitmap bitmap, int maxColors) {
            Intrinsics.checkNotNullParameter(bitmap, "bitmap");
            int width = bitmap.getWidth();
            int height = bitmap.getHeight();
            int[] iArr = new int[width * height];
            bitmap.getPixels(iArr, 0, width, 0, 0, width, height);
            return new ColorCutQuantizer(new ColorHistogram(iArr), maxColors, null);
        }

        private Companion() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final boolean shouldIgnoreColor(float[] hslColor) {
            return isWhite(hslColor) || isBlack(hslColor) || isNearRedILine(hslColor);
        }
    }

    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0082\u0004\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u0006\u0010\u0010\u001a\u00020\u0011J\u0006\u0010\u0014\u001a\u00020\u0015J\n\u0010\u0016\u001a\u00060\u0000R\u00020\u0017J\u0006\u0010\u001a\u001a\u00020\u0003J\u000e\u0010\u001f\u001a\u00020\u00032\u0006\u0010 \u001a\u00020\u0003R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010\r\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0012\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b\u0013\u0010\u000fR\u0011\u0010\u0018\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b\u0019\u0010\u000fR\u0011\u0010\u001b\u001a\u00020\u001c8F¢\u0006\u0006\u001a\u0004\b\u001d\u0010\u001e¨\u0006!"}, d2 = {"Lcom/discord/image/color_quantizer/ColorCutQuantizer$Vbox;", "", "lowerIndex", "", "upperIndex", "<init>", "(Lcom/discord/image/color_quantizer/ColorCutQuantizer;II)V", "minRed", "maxRed", "minGreen", "maxGreen", "minBlue", "maxBlue", "volume", "getVolume", "()I", "canSplit", "", "colorCount", "getColorCount", "fitBox", "", "splitBox", "Lcom/discord/image/color_quantizer/ColorCutQuantizer;", "longestColorDimension", "getLongestColorDimension", "findSplitPoint", "averageColor", "Lcom/discord/image/color_quantizer/Swatch;", "getAverageColor", "()Lcom/discord/image/color_quantizer/Swatch;", "midPoint", "dimension", "color_quantizer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nColorCutQuantizer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ColorCutQuantizer.kt\ncom/discord/image/color_quantizer/ColorCutQuantizer$Vbox\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,391:1\n1#2:392\n*E\n"})
    public final class Vbox {
        private final int lowerIndex;
        private int maxBlue;
        private int maxGreen;
        private int maxRed;
        private int minBlue;
        private int minGreen;
        private int minRed;
        private int upperIndex;

        public Vbox(int i5, int i6) {
            this.lowerIndex = i5;
            this.upperIndex = i6;
            fitBox();
        }

        public final boolean canSplit() {
            return getColorCount() > 1;
        }

        public final int findSplitPoint() {
            int longestColorDimension = getLongestColorDimension();
            ColorCutQuantizer.this.modifySignificantOctet(longestColorDimension, this.lowerIndex, this.upperIndex);
            Arrays.sort(ColorCutQuantizer.this.mColors, this.lowerIndex, this.upperIndex + 1);
            ColorCutQuantizer.this.modifySignificantOctet(longestColorDimension, this.lowerIndex, this.upperIndex);
            int midPoint = midPoint(longestColorDimension);
            int i5 = this.upperIndex;
            for (int i6 = this.lowerIndex; i6 < i5; i6++) {
                int i10 = ColorCutQuantizer.this.mColors[i6];
                if (longestColorDimension == ColorCutQuantizer.COMPONENT_RED) {
                    if (Color.red(i10) >= midPoint) {
                        return i6;
                    }
                } else if (longestColorDimension != ColorCutQuantizer.COMPONENT_GREEN) {
                    if (longestColorDimension == -1 && Color.blue(i10) > midPoint) {
                        return i6;
                    }
                } else {
                    if (Color.green(i10) >= midPoint) {
                        return i6;
                    }
                }
            }
            return this.lowerIndex;
        }

        public final void fitBox() {
            this.minBlue = 255;
            this.minGreen = 255;
            this.minRed = 255;
            this.maxBlue = 0;
            this.maxGreen = 0;
            this.maxRed = 0;
            int i5 = this.lowerIndex;
            int i6 = this.upperIndex;
            if (i5 > i6) {
                return;
            }
            while (true) {
                int i10 = ColorCutQuantizer.this.mColors[i5];
                int red = Color.red(i10);
                int green = Color.green(i10);
                int blue = Color.blue(i10);
                if (red > this.maxRed) {
                    this.maxRed = red;
                }
                if (red < this.minRed) {
                    this.minRed = red;
                }
                if (green > this.maxGreen) {
                    this.maxGreen = green;
                }
                if (green < this.minGreen) {
                    this.minGreen = green;
                }
                if (blue > this.maxBlue) {
                    this.maxBlue = blue;
                }
                if (blue < this.minBlue) {
                    this.minBlue = blue;
                }
                if (i5 == i6) {
                    return;
                } else {
                    i5++;
                }
            }
        }

        @NotNull
        public final Swatch getAverageColor() {
            int i5;
            int i6;
            int i10;
            int i11 = this.lowerIndex;
            int i12 = this.upperIndex;
            int i13 = 0;
            if (i11 <= i12) {
                int i14 = 0;
                i6 = 0;
                i10 = 0;
                while (true) {
                    int i15 = ColorCutQuantizer.this.mColors[i11];
                    int i16 = ColorCutQuantizer.this.mColorPopulations.get(i15);
                    i13 += i16;
                    i14 += Color.red(i15) * i16;
                    i6 += Color.green(i15) * i16;
                    i10 += Color.blue(i15) * i16;
                    if (i11 == i12) {
                        break;
                    }
                    i11++;
                }
                i5 = i13;
                i13 = i14;
            } else {
                i5 = 0;
                i6 = 0;
                i10 = 0;
            }
            float f2 = i13;
            float f10 = i5;
            return new Swatch(Math.round(f2 / f10), Math.round(i6 / f10), Math.round(i10 / f10), i5);
        }

        public final int getColorCount() {
            return this.upperIndex - this.lowerIndex;
        }

        public final int getLongestColorDimension() {
            int i5 = this.maxRed - this.minRed;
            int i6 = this.maxGreen - this.minGreen;
            int i10 = this.maxBlue - this.minBlue;
            if (i5 >= i6 && i5 >= i10) {
                return ColorCutQuantizer.COMPONENT_RED;
            }
            if (i6 < i5 || i6 < i10) {
                return -1;
            }
            return ColorCutQuantizer.COMPONENT_GREEN;
        }

        public final int getVolume() {
            return ((this.maxBlue - this.minBlue) + 1) * ((this.maxGreen - this.minGreen) + 1) * ((this.maxRed - this.minRed) + 1);
        }

        public final int midPoint(int dimension) {
            return dimension != ColorCutQuantizer.COMPONENT_RED ? dimension != ColorCutQuantizer.COMPONENT_GREEN ? dimension != -1 ? (this.minRed + this.maxRed) / 2 : (this.minBlue + this.maxBlue) / 2 : (this.minGreen + this.maxGreen) / 2 : (this.minRed + this.maxRed) / 2;
        }

        @NotNull
        public final Vbox splitBox() {
            if (!canSplit()) {
                throw new IllegalStateException("Can not split a box with only 1 color");
            }
            int findSplitPoint = findSplitPoint();
            Vbox vbox = ColorCutQuantizer.this.new Vbox(findSplitPoint + 1, this.upperIndex);
            this.upperIndex = findSplitPoint;
            fitBox();
            return vbox;
        }
    }

    public /* synthetic */ ColorCutQuantizer(ColorHistogram colorHistogram, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(colorHistogram, i5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int VBOX_COMPARATOR_VOLUME$lambda$2(Vbox vbox, Vbox vbox2) {
        return vbox2.getVolume() - vbox.getVolume();
    }

    @NotNull
    public static final ColorCutQuantizer fromBitmap(@NotNull Bitmap bitmap, int i5) {
        return INSTANCE.fromBitmap(bitmap, i5);
    }

    private final List<Swatch> generateAverageColors(Collection<Vbox> vboxes) {
        ArrayList arrayList = new ArrayList(vboxes.size());
        Iterator<Vbox> it = vboxes.iterator();
        while (it.hasNext()) {
            Swatch averageColor = it.next().getAverageColor();
            if (!INSTANCE.shouldIgnoreColor(averageColor)) {
                arrayList.add(averageColor);
            }
        }
        return arrayList;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void modifySignificantOctet(int dimension, int lowIndex, int highIndex) {
        if (dimension == COMPONENT_GREEN) {
            while (lowIndex <= highIndex) {
                int[] iArr = this.mColors;
                int i5 = iArr[lowIndex];
                iArr[lowIndex] = Color.rgb((i5 >> 8) & 255, (i5 >> 16) & 255, i5 & 255);
                lowIndex++;
            }
            return;
        }
        if (dimension != -1) {
            return;
        }
        while (lowIndex <= highIndex) {
            int[] iArr2 = this.mColors;
            int i6 = iArr2[lowIndex];
            iArr2[lowIndex] = Color.rgb(i6 & 255, (i6 >> 8) & 255, (i6 >> 16) & 255);
            lowIndex++;
        }
    }

    private final List<Swatch> quantizePixels(int maxColorIndex, int maxColors) {
        PriorityQueue<Vbox> priorityQueue = new PriorityQueue<>(maxColors, VBOX_COMPARATOR_VOLUME);
        priorityQueue.offer(new Vbox(0, maxColorIndex));
        splitBoxes(priorityQueue, maxColors);
        return generateAverageColors(priorityQueue);
    }

    private final boolean shouldIgnoreColor(int color) {
        int alpha = Color.alpha(color);
        ColorUtils.RGBtoHSL(Color.red(color), Color.green(color), Color.blue(color), this.mTempHsl);
        return alpha < 250 || INSTANCE.shouldIgnoreColor(this.mTempHsl);
    }

    private final void splitBoxes(PriorityQueue<Vbox> queue, int maxSize) {
        Vbox poll;
        while (queue.size() < maxSize && (poll = queue.poll()) != null && poll.canSplit()) {
            queue.offer(poll.splitBox());
            queue.offer(poll);
        }
    }

    @NotNull
    public final List<Swatch> getQuantizedColors() {
        return this.mQuantizedColors;
    }

    private ColorCutQuantizer(ColorHistogram colorHistogram, int i5) {
        this.mTempHsl = new float[3];
        if (colorHistogram == null) {
            throw new IllegalArgumentException("colorHistogram can not be null");
        }
        if (i5 < 1) {
            throw new IllegalArgumentException("maxColors must be 1 or greater");
        }
        int numberOfColors = colorHistogram.getNumberOfColors();
        int[] colors = colorHistogram.getColors();
        int[] colorCounts = colorHistogram.getColorCounts();
        this.mColorPopulations = new SparseIntArray(numberOfColors);
        int length = colors.length;
        for (int i6 = 0; i6 < length; i6++) {
            this.mColorPopulations.append(colors[i6], colorCounts[i6]);
        }
        this.mColors = new int[numberOfColors];
        int i10 = 0;
        for (int i11 : colors) {
            if (!shouldIgnoreColor(i11)) {
                this.mColors[i10] = i11;
                i10++;
            }
        }
        if (i10 > i5) {
            this.mQuantizedColors = quantizePixels(i10 - 1, i5);
            return;
        }
        this.mQuantizedColors = new ArrayList();
        for (int i12 : this.mColors) {
            ((ArrayList) this.mQuantizedColors).add(new Swatch(i12, this.mColorPopulations.get(i12)));
        }
    }
}
