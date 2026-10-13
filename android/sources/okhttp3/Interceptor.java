package okhttp3;

/* loaded from: classes3.dex */
public interface Interceptor {

    public interface Chain {
        Response a(Request request);

        Request i();
    }

    Response intercept(Chain chain);
}
