package us;

import okhttp3.Request;
import okhttp3.Response;
import okio.Sink;
import okio.Source;
import ps.t;
import ts.k;

/* loaded from: classes3.dex */
public interface d {
    void a();

    void b(Request request);

    Source c(Response response);

    void cancel();

    t d(boolean z5);

    k e();

    void f();

    long g(Response response);

    Sink h(Request request, long j);
}
