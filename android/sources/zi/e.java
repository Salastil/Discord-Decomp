package zi;

import bf.t;

/* loaded from: classes3.dex */
public final class e extends Exception {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(String str) {
        super(str);
        t.e(str, "Detail message must not be empty");
    }
}
