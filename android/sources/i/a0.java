package i;

import android.content.Context;
import android.content.ContextWrapper;
import android.view.View;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* loaded from: classes.dex */
public final class a0 implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final View f10251d;

    /* renamed from: e, reason: collision with root package name */
    public final String f10252e;

    /* renamed from: i, reason: collision with root package name */
    public Method f10253i;

    /* renamed from: v, reason: collision with root package name */
    public Context f10254v;

    public a0(View view, String str) {
        this.f10251d = view;
        this.f10252e = str;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        String str;
        Method method;
        if (this.f10253i == null) {
            View view2 = this.f10251d;
            Context context = view2.getContext();
            while (true) {
                String str2 = this.f10252e;
                if (context == null) {
                    int id2 = view2.getId();
                    if (id2 == -1) {
                        str = "";
                    } else {
                        str = " with id '" + view2.getContext().getResources().getResourceEntryName(id2) + "'";
                    }
                    StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Could not find method ", str2, "(View) in a parent or ancestor Context for android:onClick attribute defined on view ");
                    m5.append(view2.getClass());
                    m5.append(str);
                    throw new IllegalStateException(m5.toString());
                }
                try {
                    if (!context.isRestricted() && (method = context.getClass().getMethod(str2, View.class)) != null) {
                        this.f10253i = method;
                        this.f10254v = context;
                    }
                } catch (NoSuchMethodException unused) {
                }
                context = context instanceof ContextWrapper ? ((ContextWrapper) context).getBaseContext() : null;
            }
        }
        try {
            this.f10253i.invoke(this.f10254v, view);
        } catch (IllegalAccessException e9) {
            throw new IllegalStateException("Could not execute non-public method for android:onClick", e9);
        } catch (InvocationTargetException e10) {
            throw new IllegalStateException("Could not execute method for android:onClick", e10);
        }
    }
}
