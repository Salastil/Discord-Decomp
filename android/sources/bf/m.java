package bf;

import android.app.Activity;
import android.content.Intent;

/* loaded from: classes3.dex */
public final class m extends o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Intent f2899d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Activity f2900e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f2901i;

    public m(Activity activity, Intent intent, int i5) {
        this.f2899d = intent;
        this.f2900e = activity;
        this.f2901i = i5;
    }

    @Override // bf.o
    public final void a() {
        Intent intent = this.f2899d;
        if (intent != null) {
            this.f2900e.startActivityForResult(intent, this.f2901i);
        }
    }
}
