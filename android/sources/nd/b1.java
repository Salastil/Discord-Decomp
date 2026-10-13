package nd;

import hc.g1;

/* loaded from: classes3.dex */
public final class b1 extends g1 {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b1(String str, int i5) {
        super(str, null, false, 1);
        switch (i5) {
            case 2:
                super("Missing required field: ".concat(str), null, true, 4);
                break;
            default:
                break;
        }
    }
}
