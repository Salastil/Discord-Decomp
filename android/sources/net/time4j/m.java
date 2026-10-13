package net.time4j;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public abstract class m implements f0 {
    public static final k E;
    public static final /* synthetic */ m[] F;

    /* renamed from: d, reason: collision with root package name */
    public static final d f15275d;

    /* renamed from: e, reason: collision with root package name */
    public static final e f15276e;

    /* renamed from: i, reason: collision with root package name */
    public static final f f15277i;

    /* renamed from: v, reason: collision with root package name */
    public static final g f15278v;

    /* renamed from: w, reason: collision with root package name */
    public static final h f15279w;

    /* renamed from: x, reason: collision with root package name */
    public static final i f15280x;

    /* renamed from: y, reason: collision with root package name */
    public static final j f15281y;
    private final f0 eof = new s0(this, 2);
    private final f0 kld = new s0(this, 5);

    /* renamed from: ui, reason: collision with root package name */
    private final f0 f15283ui = new s0(this, 4);
    private final f0 nvd = new s0(this, 1);

    /* renamed from: co, reason: collision with root package name */
    private final f0 f15282co = new s0(this, 3);
    private final f0 joda = new s0(this, 6);

    static {
        d dVar = new d("MILLENNIA", 0);
        f15275d = dVar;
        e eVar = new e("CENTURIES", 1);
        f15276e = eVar;
        f fVar = new f("DECADES", 2);
        f15277i = fVar;
        g gVar = new g("YEARS", 3);
        f15278v = gVar;
        h hVar = new h("QUARTERS", 4);
        f15279w = hVar;
        i iVar = new i("MONTHS", 5);
        f15280x = iVar;
        j jVar = new j("WEEKS", 6);
        f15281y = jVar;
        k kVar = new k("DAYS", 7);
        E = kVar;
        F = new m[]{dVar, eVar, fVar, gVar, hVar, iVar, jVar, kVar};
    }

    public m(String str, int i5) {
    }

    public static m valueOf(String str) {
        return (m) Enum.valueOf(m.class, str);
    }

    public static m[] values() {
        return (m[]) F.clone();
    }

    @Override // ks.h
    public final boolean b() {
        return true;
    }
}
