package net.time4j;

import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

/* loaded from: classes3.dex */
public final class a0 implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final List f15217d;

    public a0(h0[] h0VarArr) {
        List asList = Arrays.asList(h0VarArr);
        if (asList.isEmpty()) {
            throw new IllegalArgumentException("Missing units.");
        }
        Collections.sort(asList, this);
        int size = asList.size();
        int i5 = 0;
        while (i5 < size) {
            ks.h hVar = (ks.h) asList.get(i5);
            i5++;
            for (int i6 = i5; i6 < size; i6++) {
                if (hVar.equals(asList.get(i6))) {
                    throw new IllegalArgumentException("Duplicate unit: " + hVar);
                }
            }
        }
        this.f15217d = Collections.unmodifiableList(asList);
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return Double.compare(((ks.h) obj2).getLength(), ((ks.h) obj).getLength());
    }
}
