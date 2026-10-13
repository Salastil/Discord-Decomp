package t;

import java.util.LinkedHashMap;

/* loaded from: classes.dex */
public final class b {
    public final LinkedHashMap a;

    public b(int i5) {
        switch (i5) {
            case 1:
                this.a = new LinkedHashMap();
                break;
            default:
                this.a = new LinkedHashMap(0, 0.75f, true);
                break;
        }
    }
}
