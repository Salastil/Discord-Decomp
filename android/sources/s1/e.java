package s1;

import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import kotlin.jvm.internal.Ref;
import n1.h;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17743d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f17744e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f17745i;

    public /* synthetic */ e(h hVar, Ref.ObjectRef objectRef, int i5) {
        this.f17743d = i5;
        this.f17744e = hVar;
        this.f17745i = objectRef;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f17743d) {
            case 0:
                CredentialProviderPlayServicesImpl.onClearCredential$lambda$3$0$0(this.f17744e, this.f17745i);
                break;
            default:
                this.f17744e.e(this.f17745i.element);
                break;
        }
    }
}
