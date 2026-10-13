package ls;

import java.util.EnumMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class o0 extends j0 {
    public final m0 a;

    /* renamed from: b, reason: collision with root package name */
    public final j0 f14244b;

    /* renamed from: c, reason: collision with root package name */
    public final e0 f14245c;

    /* renamed from: d, reason: collision with root package name */
    public final Map f14246d;

    /* renamed from: e, reason: collision with root package name */
    public final int f14247e;

    public o0(Enum r42, String str, e0 e0Var, EnumMap enumMap) {
        this.a = new m0(1, 18, r42);
        this.f14244b = new l0(str, true);
        this.f14245c = e0Var;
        this.f14246d = enumMap;
        int i5 = Integer.MAX_VALUE;
        for (String str2 : enumMap.values()) {
            if (str2.length() < i5) {
                i5 = str2.length();
            }
        }
        this.f14247e = i5;
    }

    @Override // ls.j0
    public final int a() {
        return this.f14247e;
    }

    @Override // ls.j0
    public final j0 b(int i5) {
        return new o0(this.a, this.f14244b, this.f14245c, this.f14246d, this.f14247e);
    }

    public o0(m0 m0Var, j0 j0Var, e0 e0Var, Map map, int i5) {
        this.a = m0Var;
        this.f14244b = j0Var;
        this.f14245c = e0Var;
        this.f14246d = map;
        this.f14247e = i5;
    }
}
