package gk;

import android.view.LayoutInflater;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import com.discord.R;
import com.henninghall.date_picker.pickers.AndroidNative;
import e4.p;
import j$.util.DesugarTimeZone;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Iterator;
import java.util.Locale;
import k2.r;

/* loaded from: classes3.dex */
public final class n extends RelativeLayout {

    /* renamed from: d, reason: collision with root package name */
    public final r f9342d;

    /* renamed from: e, reason: collision with root package name */
    public final p f9343e;

    /* renamed from: i, reason: collision with root package name */
    public ArrayList f9344i;

    /* renamed from: v, reason: collision with root package name */
    public final a3.h f9345v;

    public n(LinearLayout.LayoutParams layoutParams) {
        super(com.mkuczera.haptic.d.f6615b);
        p pVar = new p();
        this.f9343e = pVar;
        this.f9344i = new ArrayList();
        this.f9345v = new a3.h(14, this);
        LinearLayout linearLayout = new LinearLayout(getContext());
        LayoutInflater from = LayoutInflater.from(getContext());
        ((gj.c) pVar.f7997n).getClass();
        from.inflate(R.layout.native_picker, linearLayout);
        addView(linearLayout, layoutParams);
        this.f9342d = new r(pVar, this);
    }

    public final boolean a(String... strArr) {
        for (String str : strArr) {
            if (this.f9344i.contains(str)) {
                return true;
            }
        }
        return false;
    }

    public final void b() {
        boolean a = a("textColor");
        r rVar = this.f9342d;
        if (a) {
            lk.b bVar = (lk.b) rVar.f13143i;
            String str = (String) ((kk.a) ((p) rVar.f13142e).f7990e).a;
            Iterator it = bVar.a().iterator();
            while (it.hasNext()) {
                ((nk.e) it.next()).f15538d.setTextColor(str);
            }
        }
        if (a("mode", "is24hourSource")) {
            Iterator it2 = ((lk.b) rVar.f13143i).a().iterator();
            while (it2.hasNext()) {
                nk.e eVar = (nk.e) it2.next();
                eVar.f15538d.setVisibility(eVar.h() ? 0 : 8);
            }
        }
        if (a("mode", "locale", "is24hourSource")) {
            lk.b bVar2 = (lk.b) rVar.f13143i;
            ve.i iVar = bVar2.j;
            ((LinearLayout) iVar.f19405d).removeAllViews();
            Iterator it3 = ((gj.c) bVar2.a.f7997n).L().iterator();
            while (it3.hasNext()) {
                ((LinearLayout) iVar.f19405d).addView(((nk.e) bVar2.k.get((ik.c) it3.next())).f15538d.getView());
            }
        }
        if (a("date", "locale", "maximumDate", "minimumDate", "minuteInterval", "mode", "timezoneOffsetInMinutes")) {
            lk.b bVar3 = (lk.b) rVar.f13143i;
            new r8.c(13);
            Iterator it4 = bVar3.a().iterator();
            while (it4.hasNext()) {
                nk.e eVar2 = (nk.e) it4.next();
                eVar2.getClass();
                eVar2.f15539e = new SimpleDateFormat(eVar2.a(), eVar2.a.f());
                if (eVar2.h()) {
                    jk.e eVar3 = eVar2.f15538d;
                    eVar3.setMinValue(0);
                    eVar3.setMaxValue(0);
                    ArrayList f2 = eVar2.f();
                    eVar2.f15537c = f2;
                    ArrayList arrayList = new ArrayList();
                    Iterator it5 = f2.iterator();
                    while (it5.hasNext()) {
                        arrayList.add(eVar2.g((String) it5.next()));
                    }
                    eVar3.setDisplayedValues((String[]) arrayList.toArray(new String[0]));
                    eVar3.setMaxValue(eVar2.f15537c.size() - 1);
                }
            }
        }
        boolean a10 = a("locale");
        p pVar = this.f9343e;
        if (a10) {
            pVar.f();
            int i5 = lk.a.a;
        }
        if (a("dividerColor")) {
            String str2 = (String) ((kk.a) pVar.f7995l).a;
            Iterator it6 = ((lk.b) rVar.f13143i).a().iterator();
            while (it6.hasNext()) {
                ((nk.e) it6.next()).f15538d.setDividerColor(str2);
            }
        }
        lk.b bVar4 = (lk.b) rVar.f13143i;
        Calendar h6 = ((p) rVar.f13142e).h();
        Iterator it7 = bVar4.a().iterator();
        while (it7.hasNext()) {
            nk.e eVar4 = (nk.e) it7.next();
            jk.e eVar5 = eVar4.f15538d;
            eVar4.f15539e.setTimeZone(eVar4.a.l());
            eVar4.f15536b = h6;
            int b10 = eVar4.b(h6);
            if (b10 > -1) {
                if (eVar5.getValue() == 0) {
                    eVar5.setValue(b10);
                } else {
                    ((AndroidNative) eVar5).t(b10);
                }
            }
        }
        this.f9344i = new ArrayList();
    }

    public String getDate() {
        p pVar = (p) ((gj.c) this.f9343e.f7997n).f9329e;
        Calendar calendar = (Calendar) pVar.a;
        String str = (String) ((kk.a) pVar.f7987b).a;
        if (calendar == null) {
            return str;
        }
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'", Locale.US);
        simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
        return simpleDateFormat.format(calendar.getTime());
    }

    public String getPickerId() {
        return (String) ((kk.a) this.f9343e.k).a;
    }

    @Override // android.widget.RelativeLayout, android.view.View, android.view.ViewParent
    public final void requestLayout() {
        super.requestLayout();
        post(this.f9345v);
    }
}
