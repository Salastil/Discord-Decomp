package com.google.android.exoplayer2.upstream;

import android.net.Uri;
import ie.k;
import ie.p;
import ie.u0;
import java.util.Collections;
import java.util.Map;

/* loaded from: classes3.dex */
public interface DataSource extends k {

    public interface Factory {
        DataSource createDataSource();
    }

    void close();

    void n(u0 u0Var);

    long o(p pVar);

    default Map s() {
        return Collections.EMPTY_MAP;
    }

    Uri x();
}
