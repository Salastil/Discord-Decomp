package ha;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import android.widget.TextView;
import androidx.appcompat.widget.Toolbar;
import com.discord.chat.presentation.message.view.z;
import com.google.firebase.components.ComponentRegistrar;
import com.otaliastudios.zoom.OverZoomRangeProvider;
import com.otaliastudios.zoom.ZoomEngine;
import di.a0;
import di.o;
import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import th.q;

/* loaded from: classes3.dex */
public final class k implements OverZoomRangeProvider, tm.a, g3.b, io.sentry.util.runtime.b, qc.c, q, na.a, o, y2.b {

    /* renamed from: e, reason: collision with root package name */
    public static k f9611e;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9612d;

    public /* synthetic */ k(int i5) {
        this.f9612d = i5;
    }

    public static TextView l(Toolbar toolbar) {
        Intrinsics.checkNotNullParameter(toolbar, "toolbar");
        int childCount = toolbar.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = toolbar.getChildAt(i5);
            if (childAt instanceof TextView) {
                TextView textView = (TextView) childAt;
                if (TextUtils.equals(textView.getText(), toolbar.getTitle())) {
                    return textView;
                }
            }
        }
        return null;
    }

    @Override // na.a
    public Drawable G(oa.c image) {
        Drawable drawable;
        Drawable.ConstantState constantState;
        Intrinsics.checkNotNullParameter(image, "image");
        oa.e eVar = image instanceof oa.e ? (oa.e) image : null;
        if (eVar == null || (drawable = ((oa.h) eVar).f15809v) == null || (constantState = drawable.getConstantState()) == null) {
            return null;
        }
        return constantState.newDrawable();
    }

    @Override // di.q
    public /* synthetic */ Object a() {
        return new a0("StandardIntegrity");
    }

    @Override // io.sentry.util.runtime.b
    public void c(z zVar) {
        zVar.run();
    }

    @Override // tm.a
    public String d() {
        switch (this.f9612d) {
            case 7:
                break;
            case 11:
                break;
            case 13:
                break;
        }
        return "onDidDisappear";
    }

    @Override // y2.b
    public void e() {
        Log.d("ProfileInstaller", "DIAGNOSTIC_PROFILE_IS_COMPRESSED");
    }

    @Override // y2.b
    public void g(int i5, Object obj) {
        String str;
        switch (i5) {
            case 1:
                str = "RESULT_INSTALL_SUCCESS";
                break;
            case 2:
                str = "RESULT_ALREADY_INSTALLED";
                break;
            case 3:
                str = "RESULT_UNSUPPORTED_ART_VERSION";
                break;
            case 4:
                str = "RESULT_NOT_WRITABLE";
                break;
            case 5:
                str = "RESULT_DESIRED_FORMAT_UNSUPPORTED";
                break;
            case 6:
                str = "RESULT_BASELINE_PROFILE_NOT_FOUND";
                break;
            case 7:
                str = "RESULT_IO_EXCEPTION";
                break;
            case 8:
                str = "RESULT_PARSE_EXCEPTION";
                break;
            case 9:
            default:
                str = "";
                break;
            case 10:
                str = "RESULT_INSTALL_SKIP_FILE_SUCCESS";
                break;
            case 11:
                str = "RESULT_DELETE_SKIP_FILE_SUCCESS";
                break;
        }
        if (i5 == 6 || i5 == 7 || i5 == 8) {
            Log.e("ProfileInstaller", str, (Throwable) obj);
        } else {
            Log.d("ProfileInstaller", str);
        }
    }

    @Override // tm.a
    public String getEventName() {
        switch (this.f9612d) {
            case 7:
                break;
            case 11:
                break;
            case 13:
                break;
        }
        return "topDidDisappear";
    }

    @Override // na.a
    public boolean h(oa.c image) {
        Intrinsics.checkNotNullParameter(image, "image");
        return image instanceof oa.e;
    }

    @Override // io.sentry.util.runtime.b
    public Object i(io.sentry.util.runtime.a aVar) {
        return aVar.run();
    }

    @Override // com.otaliastudios.zoom.OverZoomRangeProvider
    public float j(ZoomEngine engine) {
        Intrinsics.checkNotNullParameter(engine, "engine");
        il.c cVar = engine.f6627h;
        return (cVar.f10960y - cVar.f10958w) * 0.1f;
    }

    @Override // g3.b
    public g3.c k(g3.a configuration) {
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        return new h3.h((Context) configuration.f9087c, (String) configuration.f9088d, (a1.d) configuration.f9089e, configuration.a, configuration.f9086b);
    }

    public List m(ComponentRegistrar componentRegistrar) {
        ArrayList arrayList = new ArrayList();
        for (ni.b bVar : componentRegistrar.getComponents()) {
            String str = bVar.a;
            if (str != null) {
                bVar = new ni.b(str, bVar.f15480b, bVar.f15481c, bVar.f15482d, bVar.f15483e, new cc.i(15, str, bVar), bVar.f15485g);
            }
            arrayList.add(bVar);
        }
        return arrayList;
    }

    @Override // qc.c
    public long b(long j) {
        return j;
    }

    @Override // th.q
    public int f(int i5) {
        return i5;
    }
}
