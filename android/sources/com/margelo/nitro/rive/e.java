package com.margelo.nitro.rive;

/* loaded from: classes3.dex */
public final class e implements g {

    /* renamed from: b, reason: collision with root package name */
    public static final e f6553b = new e(0);

    /* renamed from: c, reason: collision with root package name */
    public static final e f6554c = new e(1);

    /* renamed from: d, reason: collision with root package name */
    public static final e f6555d = new e(2);

    /* renamed from: e, reason: collision with root package name */
    public static final e f6556e = new e(3);
    public final /* synthetic */ int a;

    public /* synthetic */ e(int i5) {
        this.a = i5;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.margelo.nitro.rive.g
    public final Object a(p pVar, lo.h hVar) {
        Object[] objArr = 0;
        Object[] objArr2 = 0;
        Object[] objArr3 = 0;
        switch (this.a) {
            case 0:
                l lVar = pVar instanceof l ? (l) pVar : null;
                if (lVar != null) {
                    return lVar.a;
                }
                throw i.f6564d;
            case 1:
                m mVar = pVar instanceof m ? (m) pVar : null;
                if (mVar == null) {
                    throw i.f6564d;
                }
                String str = mVar.a;
                ur.e eVar = nr.g0.a;
                return nr.x.A(ur.d.f19093i, new t(str, objArr == true ? 1 : 0, 0), hVar);
            case 2:
                n nVar = pVar instanceof n ? (n) pVar : null;
                if (nVar == null) {
                    throw i.f6564d;
                }
                String str2 = nVar.a;
                ur.e eVar2 = nr.g0.a;
                return nr.x.A(ur.d.f19093i, new t(str2, objArr2 == true ? 1 : 0, 1), hVar);
            default:
                o oVar = pVar instanceof o ? (o) pVar : null;
                if (oVar == null) {
                    throw i.f6564d;
                }
                String str3 = oVar.a;
                ur.e eVar3 = nr.g0.a;
                return nr.x.A(ur.d.f19093i, new t(str3, objArr3 == true ? 1 : 0, 3), hVar);
        }
    }
}
