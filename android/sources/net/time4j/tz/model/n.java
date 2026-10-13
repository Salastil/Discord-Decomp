package net.time4j.tz.model;

import java.util.Comparator;
import net.time4j.w0;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public static final n f15373d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ n[] f15374e;

    static {
        n nVar = new n("INSTANCE", 0);
        f15373d = nVar;
        f15374e = new n[]{nVar};
    }

    public static n valueOf(String str) {
        return (n) Enum.valueOf(n.class, str);
    }

    public static n[] values() {
        return (n[]) f15374e.clone();
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        d dVar = (d) obj;
        d dVar2 = (d) obj2;
        g gVar = (g) dVar;
        w0 b10 = gVar.b(2000);
        long j = gVar.f15361d;
        net.time4j.k kVar = net.time4j.m.E;
        w0 w0Var = (w0) b10.l(j, kVar);
        g gVar2 = (g) dVar2;
        int compareTo = w0Var.compareTo((w0) gVar2.b(2000).l(gVar2.f15361d, kVar));
        return compareTo == 0 ? dVar.f15362e.compareTo(dVar2.f15362e) : compareTo;
    }
}
