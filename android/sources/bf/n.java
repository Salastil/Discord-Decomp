package bf;

import android.content.Intent;

/* loaded from: classes3.dex */
public final class n extends o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Intent f2902d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ af.f f2903e;

    public n(Intent intent, af.f fVar) {
        this.f2902d = intent;
        this.f2903e = fVar;
    }

    @Override // bf.o
    public final void a() {
        Intent intent = this.f2902d;
        if (intent != null) {
            this.f2903e.startActivityForResult(intent, 2);
        }
    }
}
