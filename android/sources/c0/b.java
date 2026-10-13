package c0;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.FloatCompanionObject;
import lh.f;

/* loaded from: classes.dex */
public abstract class b implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public static final f f3270d = new f(3);

    /* renamed from: e, reason: collision with root package name */
    public static final float f3271e;

    static {
        a(1.0f);
        a(-1.0f);
        FloatCompanionObject floatCompanionObject = FloatCompanionObject.INSTANCE;
        f3271e = Float.intBitsToFloat(1056964608);
    }

    public static short a(float f2) {
        int i5;
        f3270d.getClass();
        int floatToRawIntBits = Float.floatToRawIntBits(f2);
        int i6 = floatToRawIntBits >>> 31;
        int i10 = (floatToRawIntBits >>> 23) & 255;
        int i11 = 8388607 & floatToRawIntBits;
        int i12 = 31;
        int i13 = 0;
        if (i10 != 255) {
            int i14 = i10 - 112;
            if (i14 >= 31) {
                i12 = 49;
            } else if (i14 > 0) {
                i13 = i11 >> 13;
                if ((floatToRawIntBits & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                    i5 = (((i14 << 10) | i13) + 1) | (i6 << 15);
                    return (short) i5;
                }
                i12 = i14;
            } else if (i14 >= -10) {
                int i15 = (8388608 | i11) >> (1 - i14);
                if ((i15 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                    i15 += 8192;
                }
                i12 = 0;
                i13 = i15 >> 13;
            } else {
                i12 = 0;
            }
        } else if (i11 != 0) {
            i13 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
        }
        i5 = (i6 << 15) | (i12 << 10) | i13;
        return (short) i5;
    }

    public static final float b(short s2) {
        int i5;
        int i6;
        int i10;
        int i11 = 32768 & s2;
        int i12 = ((65535 & s2) >>> 10) & 31;
        int i13 = s2 & 1023;
        if (i12 != 0) {
            int i14 = i13 << 13;
            if (i12 == 31) {
                i5 = 255;
                if (i14 != 0) {
                    i14 |= 4194304;
                }
            } else {
                i5 = i12 + 112;
            }
            int i15 = i5;
            i6 = i14;
            i10 = i15;
        } else {
            if (i13 != 0) {
                FloatCompanionObject floatCompanionObject = FloatCompanionObject.INSTANCE;
                float intBitsToFloat = Float.intBitsToFloat(i13 + 1056964608) - f3271e;
                return i11 == 0 ? intBitsToFloat : -intBitsToFloat;
            }
            i10 = 0;
            i6 = 0;
        }
        int i16 = (i10 << 23) | (i11 << 16) | i6;
        FloatCompanionObject floatCompanionObject2 = FloatCompanionObject.INSTANCE;
        return Float.intBitsToFloat(i16);
    }
}
