package jc;

import android.content.ContentResolver;
import android.content.Context;
import android.database.ContentObserver;
import android.net.Uri;
import android.os.Handler;

/* loaded from: classes3.dex */
public final class i extends ContentObserver {
    public final ContentResolver a;

    /* renamed from: b, reason: collision with root package name */
    public final Uri f12528b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ j f12529c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(j jVar, Handler handler, ContentResolver contentResolver, Uri uri) {
        super(handler);
        this.f12529c = jVar;
        this.a = contentResolver;
        this.f12528b = uri;
    }

    @Override // android.database.ContentObserver
    public final void onChange(boolean z5) {
        j jVar = this.f12529c;
        j.a(jVar, f.a((Context) jVar.f12530b));
    }
}
