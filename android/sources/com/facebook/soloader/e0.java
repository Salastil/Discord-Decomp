package com.facebook.soloader;

import java.io.File;
import java.io.FilenameFilter;
import th.o1;

/* loaded from: classes3.dex */
public final class e0 implements FilenameFilter {
    public final /* synthetic */ int a;

    @Override // java.io.FilenameFilter
    public final boolean accept(File file, String str) {
        switch (this.a) {
            case 0:
                return (str.equals("dso_state") || str.equals("dso_lock") || str.equals("dso_deps")) ? false : true;
            default:
                return o1.a.matcher(str).matches();
        }
    }
}
