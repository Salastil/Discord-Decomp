package jl;

import android.app.Activity;
import android.net.Uri;
import java.util.concurrent.Callable;

/* loaded from: classes3.dex */
public final class d implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Uri f12828d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Activity f12829e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f12830i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ e f12831v;

    public d(e eVar, Uri uri, Activity activity, String str) {
        this.f12831v = eVar;
        this.f12828d = uri;
        this.f12829e = activity;
        this.f12830i = str;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        e eVar = this.f12831v;
        Uri uri = this.f12828d;
        try {
            boolean equalsIgnoreCase = "content".equalsIgnoreCase(uri.getScheme());
            Activity activity = this.f12829e;
            if (equalsIgnoreCase) {
                uri = e.a(eVar, activity, uri);
            }
            String str = this.f12830i;
            if (str != null) {
                eVar.t(activity, uri, str);
                return null;
            }
            eVar.getClass();
            eVar.t(activity, uri, eVar.k(uri.toString()));
            return null;
        } catch (Exception e9) {
            eVar.f12835c0.c("E_NO_IMAGE_DATA_FOUND", "Failed to resolve content URI: " + e9.getMessage());
            return null;
        }
    }
}
