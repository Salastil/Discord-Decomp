package p4;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.view.View;
import java.util.Map;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: d, reason: collision with root package name */
    public static final Object f16310d = new Object();
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final String f16311b;

    /* renamed from: c, reason: collision with root package name */
    public final Map f16312c;

    public a(Drawable.Callback callback, String str, Map map) {
        if (TextUtils.isEmpty(str) || str.charAt(str.length() - 1) == '/') {
            this.f16311b = str;
        } else {
            this.f16311b = str.concat("/");
        }
        this.f16312c = map;
        if (callback instanceof View) {
            this.a = ((View) callback).getContext().getApplicationContext();
        } else {
            this.a = null;
        }
    }
}
