package lr;

import java.util.concurrent.TimeUnit;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {
    public static final /* synthetic */ d[] E;

    /* renamed from: e, reason: collision with root package name */
    public static final d f14210e;

    /* renamed from: i, reason: collision with root package name */
    public static final d f14211i;

    /* renamed from: v, reason: collision with root package name */
    public static final d f14212v;

    /* renamed from: w, reason: collision with root package name */
    public static final d f14213w;

    /* renamed from: x, reason: collision with root package name */
    public static final d f14214x;

    /* renamed from: y, reason: collision with root package name */
    public static final d f14215y;

    /* renamed from: d, reason: collision with root package name */
    public final TimeUnit f14216d;

    static {
        d dVar = new d("NANOSECONDS", 0, TimeUnit.NANOSECONDS);
        f14210e = dVar;
        d dVar2 = new d("MICROSECONDS", 1, TimeUnit.MICROSECONDS);
        d dVar3 = new d("MILLISECONDS", 2, TimeUnit.MILLISECONDS);
        f14211i = dVar3;
        d dVar4 = new d("SECONDS", 3, TimeUnit.SECONDS);
        f14212v = dVar4;
        d dVar5 = new d("MINUTES", 4, TimeUnit.MINUTES);
        f14213w = dVar5;
        d dVar6 = new d("HOURS", 5, TimeUnit.HOURS);
        f14214x = dVar6;
        d dVar7 = new d("DAYS", 6, TimeUnit.DAYS);
        f14215y = dVar7;
        d[] dVarArr = {dVar, dVar2, dVar3, dVar4, dVar5, dVar6, dVar7};
        E = dVarArr;
        ki.b.p(dVarArr);
    }

    public d(String str, int i5, TimeUnit timeUnit) {
        this.f14216d = timeUnit;
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) E.clone();
    }
}
