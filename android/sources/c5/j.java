package c5;

/* loaded from: classes.dex */
public final class j implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ String f3339d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f3340e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ m f3341i;

    public j(m mVar, String str, long j) {
        this.f3341i = mVar;
        this.f3339d = str;
        this.f3340e = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        u uVar;
        u uVar2;
        m mVar = this.f3341i;
        uVar = mVar.mEventLog;
        uVar.a(this.f3340e, this.f3339d);
        uVar2 = mVar.mEventLog;
        uVar2.b(mVar.toString());
    }
}
