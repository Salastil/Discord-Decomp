package org.webrtc;

import org.webrtc.EglBase;

/* loaded from: classes4.dex */
public class EglHelper {
    public static EglBase create() {
        return EglBase.create();
    }

    public static EglBase create(EglBase.Context context, int[] iArr) {
        return EglBase.create(context, iArr);
    }
}
