package okhttp3;

import ts.h;

/* loaded from: classes3.dex */
public interface Call extends Cloneable {

    public interface Factory {
        h a(Request request);
    }

    void cancel();

    Request i();

    boolean x();
}
