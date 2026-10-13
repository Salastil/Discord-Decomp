package kk;

import com.facebook.react.bridge.Dynamic;

/* loaded from: classes3.dex */
public final class b extends c {

    /* renamed from: b, reason: collision with root package name */
    public String f13406b;

    @Override // kk.c
    public final Object a(Dynamic dynamic) {
        String replace = dynamic.asString().replace('-', '_');
        this.f13406b = replace;
        try {
            return gt.a.d(replace);
        } catch (Exception unused) {
            return gt.a.d(replace.substring(0, replace.indexOf("_")));
        }
    }
}
