package com.facebook.react.uimanager.style;

import b1.c;
import com.facebook.react.uimanager.FloatUtil;
import com.facebook.react.uimanager.LengthPercentage;
import com.facebook.react.uimanager.LengthPercentageType;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ViewProps;
import fo.n;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\"\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\b0\u00052\u0006\u0010\t\u001a\u00020\nJ!\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00060\rH\u0002¢\u0006\u0002\u0010\u000eJ!\u0010\u000f\u001a\u0004\u0018\u00010\n2\b\u0010\u0010\u001a\u0004\u0018\u00010\u00112\u0006\u0010\t\u001a\u00020\nH\u0002¢\u0006\u0002\u0010\u0012¨\u0006\u0013"}, d2 = {"Lcom/facebook/react/uimanager/style/ColorStopUtils;", "", "<init>", "()V", "getFixedColorStops", "", "Lcom/facebook/react/uimanager/style/ProcessedColorStop;", "colorStops", "Lcom/facebook/react/uimanager/style/ColorStop;", "gradientLineLength", "", "processColorTransitionHints", "originalStops", "", "([Lcom/facebook/react/uimanager/style/ProcessedColorStop;)Ljava/util/List;", "resolveColorStopPosition", ViewProps.POSITION, "Lcom/facebook/react/uimanager/LengthPercentage;", "(Lcom/facebook/react/uimanager/LengthPercentage;F)Ljava/lang/Float;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nColorStop.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ColorStop.kt\ncom/facebook/react/uimanager/style/ColorStopUtils\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,247:1\n1#2:248\n*E\n"})
/* loaded from: classes3.dex */
public final class ColorStopUtils {

    @NotNull
    public static final ColorStopUtils INSTANCE = new ColorStopUtils();

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[LengthPercentageType.values().length];
            try {
                iArr[LengthPercentageType.POINT.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[LengthPercentageType.PERCENT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    private ColorStopUtils() {
    }

    private final List<ProcessedColorStop> processColorTransitionHints(ProcessedColorStop[] originalStops) {
        int i5;
        int i6;
        ProcessedColorStop[] processedColorStopArr = originalStops;
        ArrayList I = x.I(processedColorStopArr);
        int i10 = 1;
        int length = processedColorStopArr.length - 1;
        int i11 = 1;
        int i12 = 0;
        while (i11 < length) {
            if (processedColorStopArr[i11].getColor() == null && (i6 = i11 + i12) >= i10) {
                int i13 = i6 - 1;
                Float position = ((ProcessedColorStop) I.get(i13)).getPosition();
                int i14 = i6 + 1;
                Float position2 = ((ProcessedColorStop) I.get(i14)).getPosition();
                Float position3 = ((ProcessedColorStop) I.get(i6)).getPosition();
                if (position != null && position2 != null && position3 != null) {
                    float floatValue = position3.floatValue() - position.floatValue();
                    float floatValue2 = position2.floatValue() - position3.floatValue();
                    float floatValue3 = position2.floatValue() - position.floatValue();
                    Integer color = ((ProcessedColorStop) I.get(i13)).getColor();
                    Integer color2 = ((ProcessedColorStop) I.get(i14)).getColor();
                    if (FloatUtil.floatsEqual(floatValue, floatValue2)) {
                        I.remove(i6);
                        i12--;
                    } else if (FloatUtil.floatsEqual(floatValue, 0.0f)) {
                        ((ProcessedColorStop) I.get(i6)).setColor(color2);
                    } else if (FloatUtil.floatsEqual(floatValue2, 0.0f)) {
                        ((ProcessedColorStop) I.get(i6)).setColor(color);
                    } else {
                        ArrayList arrayList = new ArrayList(9);
                        if (floatValue > floatValue2) {
                            int i15 = 0;
                            while (i15 < 7) {
                                arrayList.add(new ProcessedColorStop(null, Float.valueOf((((i15 + 7.0f) / 13.0f) * floatValue) + position.floatValue())));
                                i15++;
                                length = length;
                            }
                            i5 = length;
                            arrayList.add(new ProcessedColorStop(null, Float.valueOf((0.33333334f * floatValue2) + position3.floatValue())));
                            arrayList.add(new ProcessedColorStop(null, Float.valueOf((floatValue2 * 0.6666667f) + position3.floatValue())));
                        } else {
                            i5 = length;
                            arrayList.add(new ProcessedColorStop(null, Float.valueOf((0.33333334f * floatValue) + position.floatValue())));
                            arrayList.add(new ProcessedColorStop(null, Float.valueOf((0.6666667f * floatValue) + position.floatValue())));
                            for (int i16 = 0; i16 < 7; i16++) {
                                arrayList.add(new ProcessedColorStop(null, Float.valueOf(((i16 / 13.0f) * floatValue2) + position3.floatValue())));
                            }
                        }
                        double log = Math.log(0.5d) / ((float) Math.log(floatValue / floatValue3));
                        Iterator it = arrayList.iterator();
                        Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
                        while (it.hasNext()) {
                            Object next = it.next();
                            Intrinsics.checkNotNullExpressionValue(next, "next(...)");
                            ProcessedColorStop processedColorStop = (ProcessedColorStop) next;
                            if (processedColorStop.getPosition() != null) {
                                float pow = (float) Math.pow((processedColorStop.getPosition().floatValue() - position.floatValue()) / floatValue3, log);
                                if (Math.abs(pow) <= Float.MAX_VALUE && !Float.isNaN(pow) && color != null) {
                                    int intValue = color.intValue();
                                    if (color2 != null) {
                                        processedColorStop.setColor(Integer.valueOf(c.b(intValue, color2.intValue(), pow)));
                                    }
                                }
                            }
                        }
                        I.remove(i6);
                        I.addAll(i6, arrayList);
                        i12 += 8;
                        i11++;
                        processedColorStopArr = originalStops;
                        length = i5;
                        i10 = 1;
                    }
                }
            }
            i5 = length;
            i11++;
            processedColorStopArr = originalStops;
            length = i5;
            i10 = 1;
        }
        return I;
    }

    private final Float resolveColorStopPosition(LengthPercentage position, float gradientLineLength) {
        if (position == null) {
            return null;
        }
        int i5 = WhenMappings.$EnumSwitchMapping$0[position.getType().ordinal()];
        if (i5 == 1) {
            return Float.valueOf(PixelUtil.toPixelFromDIP(position.resolve(0.0f)) / gradientLineLength);
        }
        if (i5 == 2) {
            return Float.valueOf(position.resolve(1.0f));
        }
        throw new n();
    }

    @NotNull
    public final List<ProcessedColorStop> getFixedColorStops(@NotNull List<ColorStop> colorStops, float gradientLineLength) {
        Intrinsics.checkNotNullParameter(colorStops, "colorStops");
        int size = colorStops.size();
        ProcessedColorStop[] processedColorStopArr = new ProcessedColorStop[size];
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            processedColorStopArr[i6] = new ProcessedColorStop(null, null, 3, null);
        }
        Float resolveColorStopPosition = resolveColorStopPosition(colorStops.get(0).getPosition(), gradientLineLength);
        float floatValue = resolveColorStopPosition != null ? resolveColorStopPosition.floatValue() : 0.0f;
        int size2 = colorStops.size();
        int i10 = 0;
        boolean z5 = false;
        while (i10 < size2) {
            ColorStop colorStop = colorStops.get(i10);
            Float resolveColorStopPosition2 = resolveColorStopPosition(colorStop.getPosition(), gradientLineLength);
            if (resolveColorStopPosition2 == null) {
                resolveColorStopPosition2 = i10 == 0 ? Float.valueOf(0.0f) : i10 == colorStops.size() - 1 ? Float.valueOf(1.0f) : null;
            }
            if (resolveColorStopPosition2 != null) {
                floatValue = Math.max(resolveColorStopPosition2.floatValue(), floatValue);
                processedColorStopArr[i10] = new ProcessedColorStop(colorStop.getColor(), Float.valueOf(floatValue));
            } else {
                z5 = true;
            }
            i10++;
        }
        if (z5) {
            for (int i11 = 1; i11 < size; i11++) {
                Float position = processedColorStopArr[i11].getPosition();
                Float position2 = processedColorStopArr[i5].getPosition();
                int i12 = i11 - i5;
                int i13 = i12 - 1;
                if (position != null && position2 != null && i13 > 0) {
                    float floatValue2 = (position.floatValue() - position2.floatValue()) / i12;
                    if (1 <= i13) {
                        int i14 = 1;
                        while (true) {
                            int i15 = i5 + i14;
                            processedColorStopArr[i15] = new ProcessedColorStop(colorStops.get(i15).getColor(), Float.valueOf((i14 * floatValue2) + position2.floatValue()));
                            if (i14 == i13) {
                                break;
                            }
                            i14++;
                        }
                    }
                    i5 = i11;
                }
            }
        }
        return processColorTransitionHints(processedColorStopArr);
    }
}
