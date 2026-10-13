package qh;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.play.agesignals.AgeSignalsResult;
import java.util.Date;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class e extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final dg.b f16893g;

    /* renamed from: h, reason: collision with root package name */
    public final jg.g f16894h;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ f f16895i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(f fVar, jg.g gVar) {
        super("com.google.android.play.agesignals.protocol.IAgeSignalsServiceCallback", 4);
        Objects.requireNonNull(fVar);
        this.f16895i = fVar;
        this.f16893g = new dg.b("OnCheckAgeSignalsCallback", 0);
        this.f16894h = gVar;
    }

    @Override // ag.a
    public final boolean s(int i5, Parcel parcel) {
        dg.b bVar = this.f16893g;
        jg.g gVar = this.f16894h;
        f fVar = this.f16895i;
        if (i5 == 1) {
            Parcelable.Creator creator = Bundle.CREATOR;
            Bundle bundle = (Bundle) dg.a.a(parcel);
            dg.a.b(parcel);
            fVar.f16898c.c(gVar);
            bVar.c("onCompleteCheckAgeSignals", new Object[0]);
            gVar.d(new i(AgeSignalsResult.g("age.range.source", bundle), AgeSignalsResult.g("age.range.lower", bundle), AgeSignalsResult.g("age.range.upper", bundle), bundle.containsKey("significant.change.approval.date") ? new Date(bundle.getLong("significant.change.approval.date")) : null, AgeSignalsResult.g("significant.change.status", bundle), bundle.containsKey("install.id") ? bundle.getString("install.id") : null));
            return true;
        }
        if (i5 != 3) {
            return false;
        }
        Parcelable.Creator creator2 = Bundle.CREATOR;
        Bundle bundle2 = (Bundle) dg.a.a(parcel);
        dg.a.b(parcel);
        fVar.f16898c.c(gVar);
        int i6 = bundle2.getInt("error.code");
        bVar.a(Integer.valueOf(i6));
        gVar.c(new a(i6, 0));
        return true;
    }
}
