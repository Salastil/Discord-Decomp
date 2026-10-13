package ze;

import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.BasePendingResult;

/* loaded from: classes3.dex */
public final class p extends BasePendingResult {

    /* renamed from: f, reason: collision with root package name */
    public final Status f21217f;

    public p(Status status) {
        super(null);
        this.f21217f = status;
    }

    @Override // com.google.android.gms.common.api.internal.BasePendingResult
    public final n M(Status status) {
        return this.f21217f;
    }
}
