package qm;

import a5.k0;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.uimanager.StateWrapper;

/* loaded from: classes3.dex */
public final class b {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public StateWrapper f16905b;

    /* renamed from: c, reason: collision with root package name */
    public float f16906c;

    /* renamed from: d, reason: collision with root package name */
    public float f16907d;

    /* renamed from: e, reason: collision with root package name */
    public float f16908e;

    /* renamed from: f, reason: collision with root package name */
    public float f16909f;

    public b(boolean z5) {
        this.a = z5;
    }

    public static void a(b bVar, float f2, Integer num, Integer num2, Integer num3, Integer num4, int i5) {
        float f10;
        if ((i5 & 2) != 0) {
            num = null;
        }
        if ((i5 & 4) != 0) {
            num2 = null;
        }
        if ((i5 & 8) != 0) {
            num3 = null;
        }
        if ((i5 & 16) != 0) {
            num4 = null;
        }
        if (num != null) {
            bVar.getClass();
            f10 = k0.O(num.intValue(), f2);
        } else {
            f10 = bVar.f16906c;
        }
        float O = num2 != null ? k0.O(num2.intValue(), f2) : bVar.f16907d;
        float O2 = num3 != null ? k0.O(num3.intValue(), f2) : bVar.f16908e;
        float O3 = num4 != null ? k0.O(num4.intValue(), f2) : bVar.f16909f;
        if (Math.abs(bVar.f16906c - f10) >= 0.1f || Math.abs(bVar.f16907d - O) >= 0.1f || Math.abs(bVar.f16908e - O2) >= 0.1f || Math.abs(bVar.f16909f - O3) >= 0.1f) {
            bVar.f16906c = f10;
            bVar.f16907d = O;
            bVar.f16908e = O2;
            bVar.f16909f = O3;
            WritableNativeMap writableNativeMap = new WritableNativeMap();
            if (bVar.a) {
                writableNativeMap.putDouble("frameWidth", f10);
                writableNativeMap.putDouble("frameHeight", O);
            }
            writableNativeMap.putDouble("contentOffsetX", O2);
            writableNativeMap.putDouble("contentOffsetY", O3);
            StateWrapper stateWrapper = bVar.f16905b;
            if (stateWrapper != null) {
                stateWrapper.updateState(writableNativeMap);
            }
        }
    }
}
