package ki;

import android.content.Context;
import android.text.TextUtils;
import bf.t;
import e4.r;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class i {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f13395b;

    /* renamed from: c, reason: collision with root package name */
    public final String f13396c;

    /* renamed from: d, reason: collision with root package name */
    public final String f13397d;

    /* renamed from: e, reason: collision with root package name */
    public final String f13398e;

    /* renamed from: f, reason: collision with root package name */
    public final String f13399f;

    /* renamed from: g, reason: collision with root package name */
    public final String f13400g;

    public i(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        int i5 = gf.f.a;
        t.i("ApplicationId must be set.", true ^ (str == null || str.trim().isEmpty()));
        this.f13395b = str;
        this.a = str2;
        this.f13396c = str3;
        this.f13397d = str4;
        this.f13398e = str5;
        this.f13399f = str6;
        this.f13400g = str7;
    }

    public static i a(Context context) {
        io.sentry.internal.debugmeta.c cVar = new io.sentry.internal.debugmeta.c(context, 4);
        String M = cVar.M("google_app_id");
        if (TextUtils.isEmpty(M)) {
            return null;
        }
        return new i(M, cVar.M("google_api_key"), cVar.M("firebase_database_url"), cVar.M("ga_trackingId"), cVar.M("gcm_defaultSenderId"), cVar.M("google_storage_bucket"), cVar.M("project_id"));
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return t.j(this.f13395b, iVar.f13395b) && t.j(this.a, iVar.a) && t.j(this.f13396c, iVar.f13396c) && t.j(this.f13397d, iVar.f13397d) && t.j(this.f13398e, iVar.f13398e) && t.j(this.f13399f, iVar.f13399f) && t.j(this.f13400g, iVar.f13400g);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f13395b, this.a, this.f13396c, this.f13397d, this.f13398e, this.f13399f, this.f13400g});
    }

    public final String toString() {
        r rVar = new r(this);
        rVar.e(this.f13395b, "applicationId");
        rVar.e(this.a, "apiKey");
        rVar.e(this.f13396c, "databaseUrl");
        rVar.e(this.f13398e, "gcmSenderId");
        rVar.e(this.f13399f, "storageBucket");
        rVar.e(this.f13400g, "projectId");
        return rVar.toString();
    }
}
