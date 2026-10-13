package ad;

import android.app.Notification;
import android.app.PendingIntent;
import android.app.RemoteInput;
import android.content.Context;
import android.graphics.drawable.Icon;
import android.opengl.GLES20;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.SparseArray;
import android.util.SparseBooleanArray;
import android.util.SparseIntArray;
import androidx.core.app.NotificationCompat$Action;
import androidx.core.app.NotificationCompat$Builder;
import androidx.core.app.Person;
import androidx.core.app.RemoteInput;
import androidx.core.graphics.drawable.IconCompat;
import com.discord.R;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
import ip.s0;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.TimeZone;
import jc.o0;
import kotlin.jvm.internal.Intrinsics;
import x0.i0;
import x0.v0;
import x0.w0;
import x0.x0;

/* loaded from: classes3.dex */
public final class d0 implements b0, up.e {

    /* renamed from: d, reason: collision with root package name */
    public int f316d;

    /* renamed from: e, reason: collision with root package name */
    public Object f317e;

    /* renamed from: i, reason: collision with root package name */
    public Object f318i;

    /* renamed from: v, reason: collision with root package name */
    public Object f319v;

    /* renamed from: w, reason: collision with root package name */
    public final Object f320w;

    public d0(lk.b bVar, e4.p pVar, k2.r rVar, gk.n nVar) {
        this.f320w = new HashSet();
        this.f317e = bVar;
        this.f319v = rVar;
        this.f318i = pVar;
    }

    public static void e(int i5, int i6, String str) {
        int glCreateShader = GLES20.glCreateShader(i6);
        GLES20.glShaderSource(glCreateShader, str);
        GLES20.glCompileShader(glCreateShader);
        int[] iArr = {0};
        GLES20.glGetShaderiv(glCreateShader, 35713, iArr, 0);
        ke.b.i(GLES20.glGetShaderInfoLog(glCreateShader) + ", source: " + str, iArr[0] == 1);
        GLES20.glAttachShader(i5, glCreateShader);
        GLES20.glDeleteShader(glCreateShader);
        ke.b.h();
    }

    @Override // up.e
    public s0 a(op.b0 javaTypeParameter) {
        Intrinsics.checkNotNullParameter(javaTypeParameter, "javaTypeParameter");
        vp.f0 f0Var = (vp.f0) ((xq.j) this.f320w).invoke(javaTypeParameter);
        return f0Var != null ? f0Var : ((up.e) ((e4.i) this.f317e).f7953e).a(javaTypeParameter);
    }

    /* JADX WARN: Code restructure failed: missing block: B:53:0x0165, code lost:
    
        if (r32.u() == 21) goto L41;
     */
    @Override // ad.b0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void c(ke.w wVar) {
        ke.b0 b0Var;
        SparseArray sparseArray;
        ke.b0 b0Var2;
        int i5;
        int i6;
        char c6;
        SparseArray sparseArray2;
        int i10;
        SparseArray sparseArray3 = (SparseArray) this.f318i;
        SparseIntArray sparseIntArray = (SparseIntArray) this.f319v;
        ke.v vVar = (ke.v) this.f317e;
        e0 e0Var = (e0) this.f320w;
        SparseArray sparseArray4 = e0Var.f344f;
        SparseBooleanArray sparseBooleanArray = e0Var.f345g;
        f fVar = e0Var.f343e;
        List list = e0Var.f340b;
        int i11 = e0Var.a;
        if (wVar.u() != 2) {
            return;
        }
        if (i11 == 1 || i11 == 2 || e0Var.f348l == 1) {
            b0Var = (ke.b0) list.get(0);
        } else {
            b0Var = new ke.b0(((ke.b0) list.get(0)).c());
            list.add(b0Var);
        }
        if ((wVar.u() & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            return;
        }
        wVar.G(1);
        int z5 = wVar.z();
        wVar.G(3);
        wVar.e(vVar.f13356b, 0, 2);
        vVar.p(0);
        vVar.s(3);
        e0Var.f354r = vVar.i(13);
        wVar.e(vVar.f13356b, 0, 2);
        vVar.p(0);
        vVar.s(4);
        wVar.G(vVar.i(12));
        if (i11 == 2 && e0Var.f352p == null) {
            h0 a = fVar.a(21, new e4.m(21, (String) null, (ArrayList) null, ke.d0.f13298f));
            e0Var.f352p = a;
            if (a != null) {
                a.b(b0Var, e0Var.k, new g0(z5, 21, 8192));
            }
        }
        sparseArray3.clear();
        sparseIntArray.clear();
        int a10 = wVar.a();
        while (a10 > 0) {
            wVar.e(vVar.f13356b, 0, 5);
            vVar.p(0);
            int i12 = vVar.i(8);
            vVar.s(3);
            int i13 = vVar.i(13);
            vVar.s(4);
            int i14 = vVar.i(12);
            int i15 = wVar.f13363b;
            int i16 = i15 + i14;
            int i17 = a10;
            SparseArray sparseArray5 = sparseArray4;
            ke.b0 b0Var3 = b0Var;
            int i18 = -1;
            ArrayList arrayList = null;
            ke.v vVar2 = vVar;
            String str = null;
            while (true) {
                if (wVar.f13363b >= i16) {
                    i6 = z5;
                    break;
                }
                int u5 = wVar.u();
                i6 = z5;
                int u6 = wVar.f13363b + wVar.u();
                if (u6 > i16) {
                    break;
                }
                SparseArray sparseArray6 = sparseArray3;
                if (u5 == 5) {
                    long v5 = wVar.v();
                    if (v5 == 1094921523) {
                        i18 = 129;
                    } else if (v5 == 1161904947) {
                        i18 = 135;
                    } else {
                        if (v5 != 1094921524) {
                            if (v5 == 1212503619) {
                                i18 = 36;
                            }
                        }
                        i18 = 172;
                    }
                    i10 = u6;
                } else if (u5 == 106) {
                    i10 = u6;
                    i18 = 129;
                } else if (u5 == 122) {
                    i10 = u6;
                    i18 = 135;
                } else {
                    if (u5 != 127) {
                        if (u5 == 123) {
                            i18 = 138;
                        } else {
                            if (u5 == 10) {
                                i10 = u6;
                                str = wVar.s(3, ei.d.f8100c).trim();
                            } else if (u5 == 89) {
                                arrayList = new ArrayList();
                                while (wVar.f13363b < u6) {
                                    String trim = wVar.s(3, ei.d.f8100c).trim();
                                    wVar.u();
                                    byte[] bArr = new byte[4];
                                    wVar.e(bArr, 0, 4);
                                    arrayList.add(new f0(bArr, trim));
                                    u6 = u6;
                                }
                                i10 = u6;
                                i18 = 89;
                            } else {
                                i10 = u6;
                                if (u5 == 111) {
                                    i18 = 257;
                                }
                            }
                            wVar.G(i10 - wVar.f13363b);
                            z5 = i6;
                            sparseArray3 = sparseArray6;
                        }
                    }
                    i10 = u6;
                }
                wVar.G(i10 - wVar.f13363b);
                z5 = i6;
                sparseArray3 = sparseArray6;
            }
            SparseArray sparseArray7 = sparseArray3;
            wVar.F(i16);
            e4.m mVar = new e4.m(i18, str, arrayList, Arrays.copyOfRange(wVar.a, i15, i16));
            if (i12 == 6 || i12 == 5) {
                i12 = i18;
            }
            a10 = i17 - (i14 + 5);
            int i19 = i11 == 2 ? i12 : i13;
            if (sparseBooleanArray.get(i19)) {
                sparseArray2 = sparseArray7;
                c6 = 21;
            } else {
                c6 = 21;
                h0 a11 = (i11 == 2 && i12 == 21) ? e0Var.f352p : fVar.a(i12, mVar);
                if (i11 != 2 || i13 < sparseIntArray.get(i19, 8192)) {
                    sparseIntArray.put(i19, i13);
                    sparseArray2 = sparseArray7;
                    sparseArray2.put(i19, a11);
                } else {
                    sparseArray2 = sparseArray7;
                }
            }
            sparseArray3 = sparseArray2;
            vVar = vVar2;
            sparseArray4 = sparseArray5;
            b0Var = b0Var3;
            z5 = i6;
        }
        SparseArray sparseArray8 = sparseArray4;
        int i20 = z5;
        ke.b0 b0Var4 = b0Var;
        SparseArray sparseArray9 = sparseArray3;
        int size = sparseIntArray.size();
        int i21 = 0;
        while (i21 < size) {
            int keyAt = sparseIntArray.keyAt(i21);
            int valueAt = sparseIntArray.valueAt(i21);
            sparseBooleanArray.put(keyAt, true);
            e0Var.f346h.put(valueAt, true);
            h0 h0Var = (h0) sparseArray9.valueAt(i21);
            if (h0Var != null) {
                if (h0Var != e0Var.f352p) {
                    i5 = i20;
                    b0Var2 = b0Var4;
                    h0Var.b(b0Var2, e0Var.k, new g0(i5, keyAt, 8192));
                } else {
                    b0Var2 = b0Var4;
                    i5 = i20;
                }
                sparseArray = sparseArray8;
                sparseArray.put(valueAt, h0Var);
            } else {
                sparseArray = sparseArray8;
                b0Var2 = b0Var4;
                i5 = i20;
            }
            i21++;
            sparseArray8 = sparseArray;
            i20 = i5;
            b0Var4 = b0Var2;
        }
        SparseArray sparseArray10 = sparseArray8;
        if (i11 == 2) {
            if (e0Var.f349m) {
                return;
            }
            e0Var.k.r();
            e0Var.f348l = 0;
            e0Var.f349m = true;
            return;
        }
        sparseArray10.remove(this.f316d);
        int i22 = i11 == 1 ? 0 : e0Var.f348l - 1;
        e0Var.f348l = i22;
        if (i22 == 0) {
            e0Var.k.r();
            e0Var.f349m = true;
        }
    }

    public void d(NotificationCompat$Action notificationCompat$Action) {
        IconCompat a = notificationCompat$Action.a();
        int i5 = notificationCompat$Action.f1443f;
        boolean z5 = notificationCompat$Action.f1441d;
        Bundle bundle = notificationCompat$Action.a;
        Notification.Action.Builder builder = new Notification.Action.Builder(a != null ? a.i(null) : null, notificationCompat$Action.f1446i, notificationCompat$Action.j);
        RemoteInput[] remoteInputArr = notificationCompat$Action.f1440c;
        if (remoteInputArr != null) {
            android.app.RemoteInput[] remoteInputArr2 = new android.app.RemoteInput[remoteInputArr.length];
            for (int i6 = 0; i6 < remoteInputArr.length; i6++) {
                RemoteInput remoteInput = remoteInputArr[i6];
                RemoteInput.Builder addExtras = new RemoteInput.Builder(remoteInput.a).setLabel(remoteInput.f1491b).setChoices(remoteInput.f1492c).setAllowFreeFormInput(remoteInput.f1493d).addExtras(remoteInput.f1495f);
                if (Build.VERSION.SDK_INT >= 26) {
                    Iterator it = remoteInput.f1496g.iterator();
                    while (it.hasNext()) {
                        x0.k.B(addExtras, (String) it.next());
                    }
                }
                if (Build.VERSION.SDK_INT >= 29) {
                    x0.g.j(addExtras, remoteInput.f1494e);
                }
                remoteInputArr2[i6] = addExtras.build();
            }
            for (android.app.RemoteInput remoteInput2 : remoteInputArr2) {
                builder.addRemoteInput(remoteInput2);
            }
        }
        Bundle bundle2 = bundle != null ? new Bundle(bundle) : new Bundle();
        bundle2.putBoolean("android.support.allowGeneratedReplies", z5);
        int i10 = Build.VERSION.SDK_INT;
        builder.setAllowGeneratedReplies(z5);
        bundle2.putInt("android.support.action.semanticAction", i5);
        if (i10 >= 28) {
            x0.m.g(builder, i5);
        }
        if (i10 >= 29) {
            x0.g.i(builder, notificationCompat$Action.f1444g);
        }
        if (i10 >= 31) {
            w0.a(builder, notificationCompat$Action.k);
        }
        bundle2.putBoolean("android.support.action.showsUserInterface", notificationCompat$Action.f1442e);
        builder.addExtras(bundle2);
        ((Notification.Builder) this.f318i).addAction(builder.build());
    }

    public boolean f(int i5, int i6) {
        v.d dVar = (v.d) this.f318i;
        int i10 = this.f316d;
        z.d a = (z.d) dVar.f19130d[i5 + i10];
        z.d b10 = (z.d) ((v.d) this.f319v).f19130d[i10 + i6];
        i0.d0 d0Var = i0.e0.a;
        Intrinsics.checkNotNullParameter(a, "prev");
        Intrinsics.checkNotNullParameter(b10, "next");
        if (Intrinsics.areEqual(a, b10)) {
            return true;
        }
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        return a.getClass() == b10.getClass();
    }

    public int g(String str) {
        int glGetAttribLocation = GLES20.glGetAttribLocation(this.f316d, str);
        GLES20.glEnableVertexAttribArray(glGetAttribLocation);
        ke.b.h();
        return glGetAttribLocation;
    }

    public SimpleDateFormat h() {
        String a;
        TimeZone l6 = ((e4.p) this.f318i).l();
        k2.r rVar = (k2.r) this.f319v;
        rVar.getClass();
        lk.b bVar = (lk.b) rVar.f13143i;
        StringBuilder sb2 = new StringBuilder();
        ArrayList c6 = bVar.c();
        if (bVar.a.g() == ik.b.f10937d) {
            a = ((nk.e) c6.get(0)).a() + " " + ((nk.e) c6.get(1)).a() + " " + ((nk.e) c6.get(2)).a();
        } else {
            a = bVar.f14071c.a();
        }
        sb2.append(a);
        sb2.append(" ");
        sb2.append(bVar.f14070b.a());
        sb2.append(" mm");
        bVar.f14072d.getClass();
        sb2.append(bVar.f14073e.a());
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat(sb2.toString(), ((e4.p) rVar.f13142e).f());
        simpleDateFormat.setTimeZone(l6);
        return simpleDateFormat;
    }

    public d0(e4.i c6, ip.m containingDeclaration, yp.e typeParameterOwner, int i5) {
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(typeParameterOwner, "typeParameterOwner");
        this.f317e = c6;
        this.f318i = containingDeclaration;
        this.f316d = i5;
        ArrayList typeParameters = typeParameterOwner.getTypeParameters();
        Intrinsics.checkNotNullParameter(typeParameters, "<this>");
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        Iterator it = typeParameters.iterator();
        int i6 = 0;
        while (it.hasNext()) {
            linkedHashMap.put(it.next(), Integer.valueOf(i6));
            i6++;
        }
        this.f319v = linkedHashMap;
        this.f320w = ((xq.l) ((up.a) ((e4.i) this.f317e).f7952d).a).d(new aq.a(17, this));
    }

    /* JADX WARN: Removed duplicated region for block: B:148:0x04a6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public d0(NotificationCompat$Builder notificationCompat$Builder) {
        ArrayList arrayList;
        Notification.BubbleMetadata b10;
        y0.e eVar;
        Bundle bundle;
        Bundle[] bundleArr;
        ArrayList arrayList2;
        ArrayList arrayList3;
        ArrayList arrayList4;
        NotificationCompat$Action g6;
        NotificationCompat$Action g10;
        int i5;
        new ArrayList();
        this.f320w = new Bundle();
        this.f319v = notificationCompat$Builder;
        Context context = notificationCompat$Builder.a;
        ArrayList arrayList5 = notificationCompat$Builder.Q;
        ArrayList arrayList6 = notificationCompat$Builder.f1448c;
        ArrayList arrayList7 = notificationCompat$Builder.f1449d;
        this.f317e = context;
        if (Build.VERSION.SDK_INT >= 26) {
            this.f318i = x0.k.c(context, notificationCompat$Builder.G);
        } else {
            this.f318i = new Notification.Builder(context);
        }
        Notification notification = notificationCompat$Builder.N;
        int i6 = 0;
        ((Notification.Builder) this.f318i).setWhen(notification.when).setSmallIcon(notification.icon, notification.iconLevel).setContent(notification.contentView).setTicker(notification.tickerText, null).setVibrate(notification.vibrate).setLights(notification.ledARGB, notification.ledOnMS, notification.ledOffMS).setOngoing((notification.flags & 2) != 0).setOnlyAlertOnce((notification.flags & 8) != 0).setAutoCancel((notification.flags & 16) != 0).setDefaults(notification.defaults).setContentTitle(notificationCompat$Builder.f1450e).setContentText(notificationCompat$Builder.f1451f).setContentInfo(notificationCompat$Builder.k).setContentIntent(notificationCompat$Builder.f1453h).setDeleteIntent(notification.deleteIntent).setFullScreenIntent(notificationCompat$Builder.f1454i, (notification.flags & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0).setNumber(notificationCompat$Builder.f1455l).setProgress(notificationCompat$Builder.f1462s, notificationCompat$Builder.f1463t, notificationCompat$Builder.f1464u);
        Notification.Builder builder = (Notification.Builder) this.f318i;
        IconCompat iconCompat = notificationCompat$Builder.j;
        builder.setLargeIcon(iconCompat == null ? null : iconCompat.i(context));
        ((Notification.Builder) this.f318i).setSubText(notificationCompat$Builder.f1460q).setUsesChronometer(notificationCompat$Builder.f1458o).setPriority(notificationCompat$Builder.f1456m);
        v0 v0Var = notificationCompat$Builder.f1459p;
        if (v0Var instanceof i0) {
            i0 i0Var = (i0) v0Var;
            PendingIntent pendingIntent = i0Var.f20199h;
            if (pendingIntent == null) {
                g6 = i0Var.g(R.drawable.ic_call_decline, R.string.call_notification_hang_up_action, i0Var.f20201l, R.color.call_notification_decline_color, i0Var.f20200i);
            } else {
                g6 = i0Var.g(R.drawable.ic_call_decline, R.string.call_notification_decline_action, i0Var.f20201l, R.color.call_notification_decline_color, pendingIntent);
            }
            PendingIntent pendingIntent2 = i0Var.f20198g;
            if (pendingIntent2 == null) {
                g10 = null;
            } else {
                boolean z5 = i0Var.j;
                g10 = i0Var.g(z5 ? R.drawable.ic_call_answer_video : R.drawable.ic_call_answer, z5 ? R.string.call_notification_answer_video_action : R.string.call_notification_answer_action, i0Var.k, R.color.call_notification_answer_color, pendingIntent2);
            }
            ArrayList arrayList8 = new ArrayList(3);
            arrayList8.add(g6);
            ArrayList arrayList9 = i0Var.a.f1447b;
            if (arrayList9 != null) {
                Iterator it = arrayList9.iterator();
                i5 = 2;
                while (it.hasNext()) {
                    NotificationCompat$Action notificationCompat$Action = (NotificationCompat$Action) it.next();
                    if (notificationCompat$Action.f1444g) {
                        arrayList8.add(notificationCompat$Action);
                    } else if (!notificationCompat$Action.a.getBoolean("key_action_priority")) {
                        arrayList8.add(notificationCompat$Action);
                        i5--;
                    }
                    if (g10 != null && i5 == 1) {
                        arrayList8.add(g10);
                        i5--;
                    }
                }
            } else {
                i5 = 2;
            }
            if (g10 != null && i5 >= 1) {
                arrayList8.add(g10);
            }
            Iterator it2 = arrayList8.iterator();
            while (it2.hasNext()) {
                d((NotificationCompat$Action) it2.next());
            }
        } else {
            Iterator it3 = notificationCompat$Builder.f1447b.iterator();
            while (it3.hasNext()) {
                d((NotificationCompat$Action) it3.next());
            }
        }
        Bundle bundle2 = notificationCompat$Builder.C;
        if (bundle2 != null) {
            ((Bundle) this.f320w).putAll(bundle2);
        }
        int i10 = Build.VERSION.SDK_INT;
        ((Notification.Builder) this.f318i).setShowWhen(notificationCompat$Builder.f1457n);
        ((Notification.Builder) this.f318i).setLocalOnly(notificationCompat$Builder.f1468y);
        ((Notification.Builder) this.f318i).setGroup(notificationCompat$Builder.f1465v);
        ((Notification.Builder) this.f318i).setSortKey(notificationCompat$Builder.f1467x);
        ((Notification.Builder) this.f318i).setGroupSummary(notificationCompat$Builder.f1466w);
        this.f316d = 0;
        ((Notification.Builder) this.f318i).setCategory(notificationCompat$Builder.B);
        ((Notification.Builder) this.f318i).setColor(notificationCompat$Builder.D);
        ((Notification.Builder) this.f318i).setVisibility(notificationCompat$Builder.E);
        ((Notification.Builder) this.f318i).setPublicVersion(notificationCompat$Builder.F);
        ((Notification.Builder) this.f318i).setSound(notification.sound, notification.audioAttributes);
        if (i10 < 28) {
            if (arrayList6 == null) {
                arrayList4 = null;
            } else {
                arrayList4 = new ArrayList(arrayList6.size());
                Iterator it4 = arrayList6.iterator();
                while (it4.hasNext()) {
                    Person person = (Person) it4.next();
                    CharSequence charSequence = person.a;
                    String str = person.f1482c;
                    if (str == null) {
                        if (charSequence != null) {
                            str = "name:" + ((Object) charSequence);
                        } else {
                            str = "";
                        }
                    }
                    arrayList4.add(str);
                }
            }
            if (arrayList4 != null) {
                if (arrayList5 == null) {
                    arrayList5 = arrayList4;
                } else {
                    s.f fVar = new s.f(arrayList5.size() + arrayList4.size());
                    fVar.addAll(arrayList4);
                    fVar.addAll(arrayList5);
                    arrayList5 = new ArrayList(fVar);
                }
            }
        }
        if (arrayList5 != null && !arrayList5.isEmpty()) {
            Iterator it5 = arrayList5.iterator();
            while (it5.hasNext()) {
                ((Notification.Builder) this.f318i).addPerson((String) it5.next());
            }
        }
        if (arrayList7.size() > 0) {
            Bundle bundle3 = notificationCompat$Builder.d().getBundle("android.car.EXTENSIONS");
            bundle3 = bundle3 == null ? new Bundle() : bundle3;
            Bundle bundle4 = new Bundle(bundle3);
            Bundle bundle5 = new Bundle();
            int i11 = 0;
            while (i11 < arrayList7.size()) {
                String num = Integer.toString(i11);
                NotificationCompat$Action notificationCompat$Action2 = (NotificationCompat$Action) arrayList7.get(i11);
                Bundle bundle6 = new Bundle();
                IconCompat a = notificationCompat$Action2.a();
                Bundle bundle7 = notificationCompat$Action2.a;
                bundle6.putInt("icon", a != null ? a.f() : i6);
                bundle6.putCharSequence(AlertFragment.ARG_TITLE, notificationCompat$Action2.f1446i);
                bundle6.putParcelable("actionIntent", notificationCompat$Action2.j);
                if (bundle7 != null) {
                    bundle = new Bundle(bundle7);
                } else {
                    bundle = new Bundle();
                }
                bundle.putBoolean("android.support.allowGeneratedReplies", notificationCompat$Action2.f1441d);
                bundle6.putBundle("extras", bundle);
                androidx.core.app.RemoteInput[] remoteInputArr = notificationCompat$Action2.f1440c;
                if (remoteInputArr == null) {
                    arrayList2 = arrayList6;
                    arrayList3 = arrayList7;
                    bundleArr = null;
                } else {
                    bundleArr = new Bundle[remoteInputArr.length];
                    arrayList2 = arrayList6;
                    arrayList3 = arrayList7;
                    int i12 = 0;
                    while (i12 < remoteInputArr.length) {
                        androidx.core.app.RemoteInput remoteInput = remoteInputArr[i12];
                        int i13 = i12;
                        Bundle bundle8 = new Bundle();
                        androidx.core.app.RemoteInput[] remoteInputArr2 = remoteInputArr;
                        int i14 = i11;
                        bundle8.putString("resultKey", remoteInput.a);
                        bundle8.putCharSequence("label", remoteInput.f1491b);
                        bundle8.putCharSequenceArray("choices", remoteInput.f1492c);
                        bundle8.putBoolean("allowFreeFormInput", remoteInput.f1493d);
                        bundle8.putBundle("extras", remoteInput.f1495f);
                        HashSet hashSet = remoteInput.f1496g;
                        if (!hashSet.isEmpty()) {
                            ArrayList<String> arrayList10 = new ArrayList<>(hashSet.size());
                            Iterator it6 = hashSet.iterator();
                            while (it6.hasNext()) {
                                arrayList10.add((String) it6.next());
                            }
                            bundle8.putStringArrayList("allowedDataTypes", arrayList10);
                        }
                        bundleArr[i13] = bundle8;
                        i12 = i13 + 1;
                        remoteInputArr = remoteInputArr2;
                        i11 = i14;
                    }
                }
                int i15 = i11;
                bundle6.putParcelableArray("remoteInputs", bundleArr);
                bundle6.putBoolean("showsUserInterface", notificationCompat$Action2.f1442e);
                bundle6.putInt("semanticAction", notificationCompat$Action2.f1443f);
                bundle5.putBundle(num, bundle6);
                i11 = i15 + 1;
                arrayList6 = arrayList2;
                arrayList7 = arrayList3;
                i6 = 0;
            }
            arrayList = arrayList6;
            bundle3.putBundle("invisible_actions", bundle5);
            bundle4.putBundle("invisible_actions", bundle5);
            notificationCompat$Builder.d().putBundle("android.car.EXTENSIONS", bundle3);
            ((Bundle) this.f320w).putBundle("android.car.EXTENSIONS", bundle4);
        } else {
            arrayList = arrayList6;
        }
        int i16 = Build.VERSION.SDK_INT;
        Icon icon = notificationCompat$Builder.P;
        if (icon != null) {
            ((Notification.Builder) this.f318i).setSmallIcon(icon);
        }
        ((Notification.Builder) this.f318i).setExtras(notificationCompat$Builder.C);
        ((Notification.Builder) this.f318i).setRemoteInputHistory(null);
        if (i16 >= 26) {
            x0.k.C((Notification.Builder) this.f318i, notificationCompat$Builder.H);
            x0.k.I((Notification.Builder) this.f318i, notificationCompat$Builder.f1461r);
            x0.k.J((Notification.Builder) this.f318i, notificationCompat$Builder.I);
            x0.k.M((Notification.Builder) this.f318i, notificationCompat$Builder.K);
            x0.k.G((Notification.Builder) this.f318i, 0);
            if (notificationCompat$Builder.A) {
                x0.k.D((Notification.Builder) this.f318i, notificationCompat$Builder.f1469z);
            }
            if (!TextUtils.isEmpty(notificationCompat$Builder.G)) {
                ((Notification.Builder) this.f318i).setSound(null).setDefaults(0).setLights(0, 0, 0).setVibrate(null);
            }
        }
        if (i16 >= 28) {
            Iterator it7 = arrayList.iterator();
            while (it7.hasNext()) {
                Person person2 = (Person) it7.next();
                Notification.Builder builder2 = (Notification.Builder) this.f318i;
                person2.getClass();
                x0.m.a(builder2, x0.m.h(person2));
            }
        }
        int i17 = Build.VERSION.SDK_INT;
        if (i17 >= 29) {
            x0.g.g((Notification.Builder) this.f318i, notificationCompat$Builder.L);
            Notification.Builder builder3 = (Notification.Builder) this.f318i;
            x0.b0 b0Var = notificationCompat$Builder.M;
            if (b0Var != null) {
                if (i17 >= 30) {
                    b10 = x0.a0.b(b0Var);
                } else if (i17 == 29) {
                    b10 = x0.z.b(b0Var);
                }
                x0.g.h(builder3, b10);
                eVar = notificationCompat$Builder.J;
                if (eVar != null) {
                    x0.g.k((Notification.Builder) this.f318i, eVar.f20595b);
                }
            }
            b10 = null;
            x0.g.h(builder3, b10);
            eVar = notificationCompat$Builder.J;
            if (eVar != null) {
            }
        }
        if (i17 >= 36) {
            x0.a((Notification.Builder) this.f318i, notificationCompat$Builder.f1452g);
        }
        if (notificationCompat$Builder.O) {
            if (((NotificationCompat$Builder) this.f319v).f1466w) {
                this.f316d = 2;
            } else {
                this.f316d = 1;
            }
            ((Notification.Builder) this.f318i).setVibrate(null);
            ((Notification.Builder) this.f318i).setSound(null);
            int i18 = notification.defaults & (-4);
            notification.defaults = i18;
            ((Notification.Builder) this.f318i).setDefaults(i18);
            if (i17 >= 26) {
                if (TextUtils.isEmpty(((NotificationCompat$Builder) this.f319v).f1465v)) {
                    ((Notification.Builder) this.f318i).setGroup("silent");
                }
                x0.k.G((Notification.Builder) this.f318i, this.f316d);
            }
        }
    }

    @Override // ad.b0
    public void b(ke.b0 b0Var, qc.l lVar, g0 g0Var) {
    }

    public d0(String str, String str2) {
        int glCreateProgram = GLES20.glCreateProgram();
        this.f316d = glCreateProgram;
        ke.b.h();
        e(glCreateProgram, 35633, str);
        e(glCreateProgram, 35632, str2);
        GLES20.glLinkProgram(glCreateProgram);
        int[] iArr = {0};
        GLES20.glGetProgramiv(glCreateProgram, 35714, iArr, 0);
        ke.b.i("Unable to link shader program: \n" + GLES20.glGetProgramInfoLog(glCreateProgram), iArr[0] == 1);
        GLES20.glUseProgram(glCreateProgram);
        this.f319v = new HashMap();
        int[] iArr2 = new int[1];
        GLES20.glGetProgramiv(glCreateProgram, 35721, iArr2, 0);
        this.f317e = new wi.d[iArr2[0]];
        for (int i5 = 0; i5 < iArr2[0]; i5++) {
            int i6 = this.f316d;
            int[] iArr3 = new int[1];
            GLES20.glGetProgramiv(i6, 35722, iArr3, 0);
            int i10 = iArr3[0];
            byte[] bArr = new byte[i10];
            GLES20.glGetActiveAttrib(i6, i5, i10, new int[1], 0, new int[1], 0, new int[1], 0, bArr, 0);
            int i11 = 0;
            while (true) {
                if (i11 >= i10) {
                    break;
                }
                if (bArr[i11] == 0) {
                    i10 = i11;
                    break;
                }
                i11++;
            }
            String str3 = new String(bArr, 0, i10);
            GLES20.glGetAttribLocation(i6, str3);
            wi.d dVar = new wi.d(11);
            ((wi.d[]) this.f317e)[i5] = dVar;
            ((HashMap) this.f319v).put(str3, dVar);
        }
        this.f320w = new HashMap();
        int[] iArr4 = new int[1];
        GLES20.glGetProgramiv(this.f316d, 35718, iArr4, 0);
        this.f318i = new ha.k[iArr4[0]];
        for (int i12 = 0; i12 < iArr4[0]; i12++) {
            int i13 = this.f316d;
            int[] iArr5 = new int[1];
            GLES20.glGetProgramiv(i13, 35719, iArr5, 0);
            int i14 = iArr5[0];
            byte[] bArr2 = new byte[i14];
            GLES20.glGetActiveUniform(i13, i12, i14, new int[1], 0, new int[1], 0, new int[1], 0, bArr2, 0);
            int i15 = 0;
            while (true) {
                if (i15 >= i14) {
                    break;
                }
                if (bArr2[i15] == 0) {
                    i14 = i15;
                    break;
                }
                i15++;
            }
            String str4 = new String(bArr2, 0, i14);
            GLES20.glGetUniformLocation(i13, str4);
            ha.k kVar = new ha.k(12);
            ((ha.k[]) this.f318i)[i12] = kVar;
            ((HashMap) this.f320w).put(str4, kVar);
        }
        ke.b.h();
    }

    public d0(o0 o0Var, ve.i iVar, byte[] bArr, com.reactnativecommunity.webview.h[] hVarArr, int i5) {
        this.f317e = o0Var;
        this.f318i = iVar;
        this.f319v = bArr;
        this.f320w = hVarArr;
        this.f316d = i5;
    }

    public d0(i0.c0 c0Var, z.e node, int i5, v.d before, v.d after) {
        Intrinsics.checkNotNullParameter(node, "node");
        Intrinsics.checkNotNullParameter(before, "before");
        Intrinsics.checkNotNullParameter(after, "after");
        this.f320w = c0Var;
        this.f317e = node;
        this.f316d = i5;
        this.f318i = before;
        this.f319v = after;
    }

    public d0(e0 e0Var, int i5) {
        this.f320w = e0Var;
        this.f317e = new ke.v(new byte[5], 5);
        this.f318i = new SparseArray();
        this.f319v = new SparseIntArray();
        this.f316d = i5;
    }
}
