package sd;

import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class d implements l {

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f17865b = {8, 13, 11, 2, 0, 1, 7};

    public static void a(int i5, ArrayList arrayList) {
        if (ki.b.J(i5, 0, 7, f17865b) == -1 || arrayList.contains(Integer.valueOf(i5))) {
            return;
        }
        arrayList.add(Integer.valueOf(i5));
    }
}
