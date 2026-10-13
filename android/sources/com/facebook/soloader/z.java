package com.facebook.soloader;

import android.content.Context;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;

/* loaded from: classes3.dex */
public final class z extends a0 {
    public static z a(String str, Context context, b0[] b0VarArr) {
        StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("couldn't find DSO to load: ", str, "\n\texisting SO sources: ");
        for (int i5 = 0; i5 < b0VarArr.length; i5++) {
            m5.append("\n\t\tSoSource ");
            m5.append(i5);
            m5.append(": ");
            m5.append(b0VarArr[i5].toString());
        }
        if (context != null) {
            m5.append("\n\tNative lib dir: ");
            m5.append(context.getApplicationInfo().nativeLibraryDir);
            m5.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        }
        return new z(str, m5.toString());
    }
}
