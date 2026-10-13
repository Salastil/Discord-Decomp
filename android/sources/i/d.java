package i;

import android.content.Context;
import android.content.DialogInterface;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.ViewStub;
import android.view.Window;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ListAdapter;
import android.widget.TextView;
import androidx.appcompat.app.AlertController$RecycleListView;
import androidx.core.widget.NestedScrollView;
import com.discord.R;
import java.lang.ref.WeakReference;

/* loaded from: classes.dex */
public final class d {
    public final int A;
    public final int B;
    public final int C;
    public final boolean D;
    public final cd.d E;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final f f10278b;

    /* renamed from: c, reason: collision with root package name */
    public final Window f10279c;

    /* renamed from: d, reason: collision with root package name */
    public CharSequence f10280d;

    /* renamed from: e, reason: collision with root package name */
    public String f10281e;

    /* renamed from: f, reason: collision with root package name */
    public AlertController$RecycleListView f10282f;

    /* renamed from: g, reason: collision with root package name */
    public View f10283g;

    /* renamed from: i, reason: collision with root package name */
    public Button f10285i;
    public CharSequence j;
    public Message k;

    /* renamed from: l, reason: collision with root package name */
    public Button f10286l;

    /* renamed from: m, reason: collision with root package name */
    public CharSequence f10287m;

    /* renamed from: n, reason: collision with root package name */
    public Message f10288n;

    /* renamed from: o, reason: collision with root package name */
    public Button f10289o;

    /* renamed from: p, reason: collision with root package name */
    public CharSequence f10290p;

    /* renamed from: q, reason: collision with root package name */
    public Message f10291q;

    /* renamed from: r, reason: collision with root package name */
    public NestedScrollView f10292r;

    /* renamed from: s, reason: collision with root package name */
    public Drawable f10293s;

    /* renamed from: t, reason: collision with root package name */
    public ImageView f10294t;

    /* renamed from: u, reason: collision with root package name */
    public TextView f10295u;

    /* renamed from: v, reason: collision with root package name */
    public TextView f10296v;

    /* renamed from: w, reason: collision with root package name */
    public View f10297w;

    /* renamed from: x, reason: collision with root package name */
    public ListAdapter f10298x;

    /* renamed from: z, reason: collision with root package name */
    public final int f10300z;

    /* renamed from: h, reason: collision with root package name */
    public boolean f10284h = false;

    /* renamed from: y, reason: collision with root package name */
    public int f10299y = -1;
    public final androidx.appcompat.widget.b F = new androidx.appcompat.widget.b(6, this);

    public d(Context context, f fVar, Window window) {
        this.a = context;
        this.f10278b = fVar;
        this.f10279c = window;
        cd.d dVar = new cd.d();
        dVar.f3412b = new WeakReference(fVar);
        this.E = dVar;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(null, h.a.f9449e, R.attr.alertDialogStyle, 0);
        this.f10300z = obtainStyledAttributes.getResourceId(0, 0);
        obtainStyledAttributes.getResourceId(2, 0);
        this.A = obtainStyledAttributes.getResourceId(4, 0);
        obtainStyledAttributes.getResourceId(5, 0);
        this.B = obtainStyledAttributes.getResourceId(7, 0);
        this.C = obtainStyledAttributes.getResourceId(3, 0);
        this.D = obtainStyledAttributes.getBoolean(6, true);
        obtainStyledAttributes.getDimensionPixelSize(1, 0);
        obtainStyledAttributes.recycle();
        fVar.c().w(1);
    }

    public static boolean a(View view) {
        if (view.onCheckIsTextEditor()) {
            return true;
        }
        if (!(view instanceof ViewGroup)) {
            return false;
        }
        ViewGroup viewGroup = (ViewGroup) view;
        int childCount = viewGroup.getChildCount();
        while (childCount > 0) {
            childCount--;
            if (a(viewGroup.getChildAt(childCount))) {
                return true;
            }
        }
        return false;
    }

    public static ViewGroup b(View view, View view2) {
        if (view == null) {
            if (view2 instanceof ViewStub) {
                view2 = ((ViewStub) view2).inflate();
            }
            return (ViewGroup) view2;
        }
        if (view2 != null) {
            ViewParent parent = view2.getParent();
            if (parent instanceof ViewGroup) {
                ((ViewGroup) parent).removeView(view2);
            }
        }
        if (view instanceof ViewStub) {
            view = ((ViewStub) view).inflate();
        }
        return (ViewGroup) view;
    }

    public final void c(int i5, CharSequence charSequence, DialogInterface.OnClickListener onClickListener) {
        Message obtainMessage = onClickListener != null ? this.E.obtainMessage(i5, onClickListener) : null;
        if (i5 == -3) {
            this.f10290p = charSequence;
            this.f10291q = obtainMessage;
        } else if (i5 == -2) {
            this.f10287m = charSequence;
            this.f10288n = obtainMessage;
        } else {
            if (i5 != -1) {
                throw new IllegalArgumentException("Button does not exist");
            }
            this.j = charSequence;
            this.k = obtainMessage;
        }
    }
}
