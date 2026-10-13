package cd;

import ke.d0;

/* loaded from: classes3.dex */
public final /* synthetic */ class t implements y {

    /* renamed from: e, reason: collision with root package name */
    public static final t f3481e = new t(0);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3482d;

    public /* synthetic */ t(int i5) {
        this.f3482d = i5;
    }

    @Override // cd.y
    public int a(Object obj) {
        o oVar = (o) obj;
        switch (this.f3482d) {
            case 2:
                String str = oVar.a;
                if (str.startsWith("OMX.google") || str.startsWith("c2.android")) {
                    return 1;
                }
                return (d0.a >= 26 || !str.equals("OMX.MTK.AUDIO.DECODER.RAW")) ? 0 : -1;
            default:
                return oVar.a.startsWith("OMX.google") ? 1 : 0;
        }
    }
}
