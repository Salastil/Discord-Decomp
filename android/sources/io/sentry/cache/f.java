package io.sentry.cache;

import java.util.Map;

/* loaded from: classes3.dex */
public final /* synthetic */ class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11438d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ g f11439e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Map f11440i;

    public /* synthetic */ f(g gVar, Map map, int i5) {
        this.f11438d = i5;
        this.f11439e = gVar;
        this.f11440i = map;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f11438d) {
            case 0:
                this.f11439e.r(this.f11440i, "tags.json");
                break;
            default:
                this.f11439e.r(this.f11440i, "extras.json");
                break;
        }
    }
}
