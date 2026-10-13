package th;

import android.os.Bundle;
import android.os.ParcelFileDescriptor;

/* loaded from: classes3.dex */
public final class i extends h {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f18467i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ i(m mVar, jg.g gVar, int i5) {
        super(mVar, gVar);
        this.f18467i = i5;
    }

    @Override // th.h, uh.l
    public void o(Bundle bundle, Bundle bundle2) {
        switch (this.f18467i) {
            case 1:
                super.o(bundle, bundle2);
                this.f18461g.d((ParcelFileDescriptor) bundle.getParcelable("chunk_file_descriptor"));
                break;
            default:
                super.o(bundle, bundle2);
                break;
        }
    }
}
