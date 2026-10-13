package androidx.constraintlayout.core;

import a3.e;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;

/* loaded from: classes.dex */
public final class Metrics {
    public long a;

    /* renamed from: b, reason: collision with root package name */
    public long f1214b;

    /* renamed from: c, reason: collision with root package name */
    public long f1215c;

    /* renamed from: d, reason: collision with root package name */
    public long f1216d;

    /* renamed from: e, reason: collision with root package name */
    public long f1217e;

    /* renamed from: f, reason: collision with root package name */
    public long f1218f;

    /* renamed from: g, reason: collision with root package name */
    public long f1219g;

    /* renamed from: h, reason: collision with root package name */
    public long f1220h;

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("\n*** Metrics ***\nmeasures: ");
        sb2.append(this.a);
        sb2.append("\nmeasuresWrap: 0\nmeasuresWrapInfeasible: 0\ndetermineGroups: 0\ninfeasibleDetermineGroups: 0\ngraphOptimizer: ");
        sb2.append(this.f1215c);
        sb2.append("\nwidgets: ");
        sb2.append(this.f1220h);
        sb2.append("\ngraphSolved: ");
        sb2.append(this.f1216d);
        sb2.append("\nlinearSolved: ");
        return e.m(sb2, this.f1217e, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
    }
}
