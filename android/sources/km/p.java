package km;

import com.facebook.react.uimanager.PointerEvents;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class p {
    public static final /* synthetic */ int[] a;

    static {
        int[] iArr = new int[PointerEvents.values().length];
        try {
            iArr[PointerEvents.BOX_ONLY.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            iArr[PointerEvents.BOX_NONE.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            iArr[PointerEvents.NONE.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            iArr[PointerEvents.AUTO.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        a = iArr;
    }
}
