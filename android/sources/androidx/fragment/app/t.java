package androidx.fragment.app;

import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class t extends c2 {
    public static void o(s.e eVar, View view) {
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        String f2 = androidx.core.view.j0.f(view);
        if (f2 != null) {
            eVar.put(f2, view);
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            int childCount = viewGroup.getChildCount();
            for (int i5 = 0; i5 < childCount; i5++) {
                View child = viewGroup.getChildAt(i5);
                if (child.getVisibility() == 0) {
                    Intrinsics.checkNotNullExpressionValue(child, "child");
                    o(eVar, child);
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:101:0x05c4, code lost:
    
        if (((android.animation.AnimatorSet) r7.f2039b) != null) goto L262;
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x05ca, code lost:
    
        r7 = r8.f2125c;
     */
    /* JADX WARN: Code restructure failed: missing block: B:104:0x05d2, code lost:
    
        if (r8.k.isEmpty() != false) goto L263;
     */
    /* JADX WARN: Code restructure failed: missing block: B:106:0x05f1, code lost:
    
        r7 = r26;
     */
    /* JADX WARN: Code restructure failed: missing block: B:107:0x05f5, code lost:
    
        if (r8.a != r7) goto L213;
     */
    /* JADX WARN: Code restructure failed: missing block: B:108:0x05f7, code lost:
    
        r8.f2131i = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:109:0x05fc, code lost:
    
        r6 = new androidx.fragment.app.j(r4);
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r15);
        r8.j.add(r6);
        r26 = r7;
        r6 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:115:0x05d8, code lost:
    
        if (androidx.fragment.app.FragmentManager.M(r18) == false) goto L270;
     */
    /* JADX WARN: Code restructure failed: missing block: B:117:0x05da, code lost:
    
        android.util.Log.v(r0, "Ignoring Animator set on " + r7 + " as this Fragment was involved in a Transition.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:121:0x05c6, code lost:
    
        r1.add(r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:125:0x060e, code lost:
    
        r1 = r1.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:127:0x0618, code lost:
    
        if (r1.hasNext() == false) goto L274;
     */
    /* JADX WARN: Code restructure failed: missing block: B:128:0x061a, code lost:
    
        r3 = (androidx.fragment.app.h) r1.next();
        r4 = r3.a;
        r7 = r4.f2125c;
     */
    /* JADX WARN: Code restructure failed: missing block: B:129:0x0626, code lost:
    
        if (r2 != false) goto L273;
     */
    /* JADX WARN: Code restructure failed: missing block: B:131:0x0643, code lost:
    
        if (r6 == false) goto L276;
     */
    /* JADX WARN: Code restructure failed: missing block: B:133:0x0660, code lost:
    
        r7 = new androidx.fragment.app.g(r3);
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r15);
        r4.j.add(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:138:0x0649, code lost:
    
        if (androidx.fragment.app.FragmentManager.M(r18) == false) goto L282;
     */
    /* JADX WARN: Code restructure failed: missing block: B:140:0x064b, code lost:
    
        android.util.Log.v(r0, "Ignoring Animation set on " + r7 + " as Animations cannot run alongside Animators.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:145:0x062c, code lost:
    
        if (androidx.fragment.app.FragmentManager.M(r18) == false) goto L284;
     */
    /* JADX WARN: Code restructure failed: missing block: B:147:0x062e, code lost:
    
        android.util.Log.v(r0, "Ignoring Animation set on " + r7 + " as Animations cannot run alongside Transitions.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:151:0x066e, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:152:0x01fb, code lost:
    
        r7 = new java.util.ArrayList();
        r10 = new java.util.ArrayList();
        r9 = new s.e(0);
        r13 = new java.util.ArrayList<>();
        r17 = new java.util.ArrayList<>();
        r1 = new s.e(0);
        r19 = r13;
        r13 = new s.e(0);
        r20 = r2.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:153:0x0227, code lost:
    
        r21 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:155:0x022d, code lost:
    
        if (r20.hasNext() == false) goto L286;
     */
    /* JADX WARN: Code restructure failed: missing block: B:156:0x022f, code lost:
    
        r6 = ((androidx.fragment.app.r) r20.next()).f2094d;
     */
    /* JADX WARN: Code restructure failed: missing block: B:157:0x0239, code lost:
    
        if (r6 == null) goto L175;
     */
    /* JADX WARN: Code restructure failed: missing block: B:158:0x023b, code lost:
    
        if (r4 == null) goto L175;
     */
    /* JADX WARN: Code restructure failed: missing block: B:159:0x023d, code lost:
    
        r22 = r2;
        r2 = r4.f2125c;
     */
    /* JADX WARN: Code restructure failed: missing block: B:160:0x0241, code lost:
    
        if (r8 == null) goto L174;
     */
    /* JADX WARN: Code restructure failed: missing block: B:161:0x0243, code lost:
    
        r23 = r7;
        r7 = r8.f2125c;
        r6 = r5.y(r5.h(r6));
        r24 = r5;
        r5 = r7.getSharedElementSourceNames();
        r25 = r10;
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, "lastIn.fragment.sharedElementSourceNames");
        r10 = r2.getSharedElementSourceNames();
        r26 = r11;
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r10, "firstOut.fragment.sharedElementSourceNames");
        r11 = r2.getSharedElementTargetNames();
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r11, "firstOut.fragment.sharedElementTargetNames");
        r14 = r11.size();
        r27 = r15;
        r15 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:163:0x0278, code lost:
    
        if (r15 >= r14) goto L290;
     */
    /* JADX WARN: Code restructure failed: missing block: B:164:0x027a, code lost:
    
        r17 = r14;
        r14 = r5.indexOf(r11.get(r15));
     */
    /* JADX WARN: Code restructure failed: missing block: B:165:0x0284, code lost:
    
        if (r14 == (-1)) goto L292;
     */
    /* JADX WARN: Code restructure failed: missing block: B:166:0x0286, code lost:
    
        r5.set(r14, r10.get(r15));
     */
    /* JADX WARN: Code restructure failed: missing block: B:168:0x028d, code lost:
    
        r15 = r15 + 1;
        r14 = r17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:171:0x0292, code lost:
    
        r10 = r7.getSharedElementTargetNames();
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r10, "lastIn.fragment.sharedElementTargetNames");
     */
    /* JADX WARN: Code restructure failed: missing block: B:172:0x029b, code lost:
    
        if (r32 != false) goto L110;
     */
    /* JADX WARN: Code restructure failed: missing block: B:173:0x029d, code lost:
    
        r15 = new kotlin.Pair(r2.getExitTransitionCallback(), r7.getEnterTransitionCallback());
     */
    /* JADX WARN: Code restructure failed: missing block: B:174:0x02b8, code lost:
    
        r11 = (androidx.core.app.SharedElementCallback) r15.f13474d;
        r14 = (androidx.core.app.SharedElementCallback) r15.f13475e;
        r15 = r5.size();
        r0 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:175:0x02c9, code lost:
    
        r21 = r14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:176:0x02cf, code lost:
    
        if (r0 >= r15) goto L293;
     */
    /* JADX WARN: Code restructure failed: missing block: B:177:0x02d1, code lost:
    
        r28 = r15;
        r15 = r5.get(r0);
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r15, "exitingNames[i]");
        r14 = r10.get(r0);
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r14, "enteringNames[i]");
        r9.put(r15, r14);
        r0 = r0 + 1;
        r14 = r21;
        r15 = r28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0077, code lost:
    
        r4 = (androidx.fragment.app.y1) r4;
        r2 = r31.listIterator(r31.size());
     */
    /* JADX WARN: Code restructure failed: missing block: B:180:0x02f3, code lost:
    
        if (androidx.fragment.app.FragmentManager.M(r18) == false) goto L125;
     */
    /* JADX WARN: Code restructure failed: missing block: B:181:0x02f5, code lost:
    
        android.util.Log.v("FragmentManager", ">>> entering view names <<<");
        r0 = r10.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:182:0x02fe, code lost:
    
        r28 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:183:0x0306, code lost:
    
        if (r0.hasNext() == false) goto L294;
     */
    /* JADX WARN: Code restructure failed: missing block: B:184:0x0308, code lost:
    
        android.util.Log.v("FragmentManager", "Name: " + r28.next());
        r0 = r28;
        r6 = r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:186:0x0324, code lost:
    
        r29 = r6;
        android.util.Log.v("FragmentManager", ">>> exiting view names <<<");
        r6 = r5.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:188:0x0333, code lost:
    
        if (r6.hasNext() == false) goto L295;
     */
    /* JADX WARN: Code restructure failed: missing block: B:189:0x0335, code lost:
    
        android.util.Log.v("FragmentManager", "Name: " + r6.next());
        r6 = r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:191:0x0351, code lost:
    
        r0 = r2.mView;
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, "firstOut.fragment.mView");
        o(r1, r0);
        r1.l(r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:192:0x035e, code lost:
    
        if (r11 == null) goto L142;
     */
    /* JADX WARN: Code restructure failed: missing block: B:194:0x0364, code lost:
    
        if (androidx.fragment.app.FragmentManager.M(r18) == false) goto L131;
     */
    /* JADX WARN: Code restructure failed: missing block: B:195:0x0366, code lost:
    
        android.util.Log.v("FragmentManager", "Executing exit callback for operation " + r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:196:0x0377, code lost:
    
        r0 = r5.size() - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:197:0x037d, code lost:
    
        if (r0 < 0) goto L143;
     */
    /* JADX WARN: Code restructure failed: missing block: B:198:0x037f, code lost:
    
        r2 = r0 - 1;
        r0 = r5.get(r0);
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, "exitingNames[i]");
        r0 = r0;
        r6 = (android.view.View) r1.get(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:199:0x0390, code lost:
    
        if (r6 != null) goto L136;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0085, code lost:
    
        if (r2.hasPrevious() == false) goto L236;
     */
    /* JADX WARN: Code restructure failed: missing block: B:200:0x0392, code lost:
    
        r9.remove(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:201:0x03af, code lost:
    
        if (r2 >= 0) goto L141;
     */
    /* JADX WARN: Code restructure failed: missing block: B:202:0x03b2, code lost:
    
        r0 = r2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:204:0x0396, code lost:
    
        r15 = androidx.core.view.s0.a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:205:0x03a0, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r0, androidx.core.view.j0.f(r6)) != false) goto L139;
     */
    /* JADX WARN: Code restructure failed: missing block: B:206:0x03a2, code lost:
    
        r9.put(androidx.core.view.j0.f(r6), (java.lang.String) r9.remove(r0));
     */
    /* JADX WARN: Code restructure failed: missing block: B:207:0x03bb, code lost:
    
        r0 = r7.mView;
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, "lastIn.fragment.mView");
        o(r13, r0);
        r13.l(r10);
        r13.l(r9.values());
     */
    /* JADX WARN: Code restructure failed: missing block: B:208:0x03cf, code lost:
    
        if (r21 == null) goto L163;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0087, code lost:
    
        r8 = r2.previous();
        r10 = (androidx.fragment.app.y1) r8;
        r18 = r15;
        r15 = r10.f2125c.mView;
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r15, "operation.fragment.mView");
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, "<this>");
     */
    /* JADX WARN: Code restructure failed: missing block: B:210:0x03d5, code lost:
    
        if (androidx.fragment.app.FragmentManager.M(r18) == false) goto L148;
     */
    /* JADX WARN: Code restructure failed: missing block: B:211:0x03d7, code lost:
    
        android.util.Log.v("FragmentManager", "Executing enter callback for operation " + r8);
     */
    /* JADX WARN: Code restructure failed: missing block: B:212:0x03e8, code lost:
    
        r0 = r10.size() - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:213:0x03ee, code lost:
    
        if (r0 < 0) goto L169;
     */
    /* JADX WARN: Code restructure failed: missing block: B:214:0x03f0, code lost:
    
        r2 = r0 - 1;
        r0 = r10.get(r0);
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, "enteringNames[i]");
        r0 = r0;
        r6 = (android.view.View) r13.get(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:215:0x0401, code lost:
    
        if (r6 != null) goto L155;
     */
    /* JADX WARN: Code restructure failed: missing block: B:216:0x0403, code lost:
    
        r0 = androidx.fragment.app.n1.b(r9, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:217:0x0407, code lost:
    
        if (r0 == null) goto L160;
     */
    /* JADX WARN: Code restructure failed: missing block: B:218:0x0409, code lost:
    
        r9.remove(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:219:0x0426, code lost:
    
        if (r2 >= 0) goto L162;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x00a0, code lost:
    
        if (r15.getAlpha() != r17) goto L34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:220:0x0429, code lost:
    
        r0 = r2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:222:0x040d, code lost:
    
        r7 = androidx.core.view.s0.a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:223:0x0417, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r0, androidx.core.view.j0.f(r6)) != false) goto L160;
     */
    /* JADX WARN: Code restructure failed: missing block: B:224:0x0419, code lost:
    
        r0 = androidx.fragment.app.n1.b(r9, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:225:0x041d, code lost:
    
        if (r0 == null) goto L160;
     */
    /* JADX WARN: Code restructure failed: missing block: B:226:0x041f, code lost:
    
        r9.put(r0, androidx.core.view.j0.f(r6));
     */
    /* JADX WARN: Code restructure failed: missing block: B:227:0x044f, code lost:
    
        r0 = r9.keySet();
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, "sharedElementNameMapping.keys");
        r2 = r1.entrySet();
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, "entries");
        r11 = 0;
        r7 = new androidx.fragment.app.s(r11, r0);
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, "<this>");
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, "predicate");
        kotlin.collections.h0.r(r2, r7, false);
        r2 = r9.values();
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, "sharedElementNameMapping.values");
        r7 = r13.entrySet();
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, "entries");
        r6 = new androidx.fragment.app.s(r11, r2);
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, "<this>");
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, "predicate");
        kotlin.collections.h0.r(r7, r6, false);
     */
    /* JADX WARN: Code restructure failed: missing block: B:228:0x0496, code lost:
    
        if (r9.isEmpty() == false) goto L172;
     */
    /* JADX WARN: Code restructure failed: missing block: B:229:0x04dd, code lost:
    
        r21 = r29;
        r17 = r5;
        r19 = r10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:231:0x04e9, code lost:
    
        r6 = r11;
        r2 = r22;
        r7 = r23;
        r5 = r24;
        r10 = r25;
        r11 = r26;
        r15 = r27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:233:0x0498, code lost:
    
        android.util.Log.i("FragmentManager", "Ignoring shared elements transition " + r29 + " between " + r4 + " and " + r8 + " as there are no matching elements in both the entering and exiting fragment. In order to run a SharedElementTransition, both fragments involved must have the element.");
        r23.clear();
        r25.clear();
        r17 = r5;
        r19 = r10;
        r6 = 0;
        r2 = r22;
        r7 = r23;
        r5 = r24;
        r10 = r25;
        r11 = r26;
        r15 = r27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:234:0x042b, code lost:
    
        r0 = androidx.fragment.app.n1.a;
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, "<this>");
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, "namedViews");
        r0 = r9.f1208i - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:235:0x043b, code lost:
    
        if ((-1) >= r0) goto L298;
     */
    /* JADX WARN: Code restructure failed: missing block: B:237:0x0447, code lost:
    
        if (r13.containsKey((java.lang.String) r9.i(r0)) != false) goto L300;
     */
    /* JADX WARN: Code restructure failed: missing block: B:238:0x0449, code lost:
    
        r9.g(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x00a6, code lost:
    
        if (r15.getVisibility() != 0) goto L34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:240:0x044c, code lost:
    
        r0 = r0 - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:243:0x03b4, code lost:
    
        r9.l(r1.keySet());
     */
    /* JADX WARN: Code restructure failed: missing block: B:244:0x034f, code lost:
    
        r29 = r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:245:0x02ab, code lost:
    
        r15 = new kotlin.Pair(r2.getEnterTransitionCallback(), r7.getExitTransitionCallback());
     */
    /* JADX WARN: Code restructure failed: missing block: B:246:0x04f8, code lost:
    
        r24 = r5;
        r23 = r7;
        r25 = r10;
        r26 = r11;
        r27 = r15;
        r11 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:249:0x0504, code lost:
    
        r22 = r2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x00a8, code lost:
    
        r15 = r16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:251:0x050c, code lost:
    
        r22 = r2;
        r24 = r5;
        r23 = r7;
        r25 = r10;
        r26 = r11;
        r27 = r15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:252:0x0519, code lost:
    
        if (r21 != null) goto L188;
     */
    /* JADX WARN: Code restructure failed: missing block: B:254:0x051f, code lost:
    
        if (r22.isEmpty() == false) goto L182;
     */
    /* JADX WARN: Code restructure failed: missing block: B:255:0x0521, code lost:
    
        r15 = "effect";
        r0 = "FragmentManager";
     */
    /* JADX WARN: Code restructure failed: missing block: B:256:0x0525, code lost:
    
        r0 = r22.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:258:0x052d, code lost:
    
        if (r0.hasNext() == false) goto L302;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x00c2, code lost:
    
        if (r15 == r13) goto L239;
     */
    /* JADX WARN: Code restructure failed: missing block: B:260:0x0537, code lost:
    
        if (((androidx.fragment.app.r) r0.next()).f2092b != null) goto L301;
     */
    /* JADX WARN: Code restructure failed: missing block: B:264:0x053a, code lost:
    
        r15 = "effect";
        r0 = "FragmentManager";
        r1 = new androidx.fragment.app.q(r22, r4, r8, r24, r21, r23, r25, r9, r19, r17, r1, r13, r32);
        r2 = r22.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:266:0x055d, code lost:
    
        if (r2.hasNext() == false) goto L304;
     */
    /* JADX WARN: Code restructure failed: missing block: B:267:0x055f, code lost:
    
        r3 = ((androidx.fragment.app.r) r2.next()).a;
        r3.getClass();
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r15);
        r3.j.add(r1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:270:0x00c9, code lost:
    
        r15 = r18;
     */
    /* JADX WARN: Code restructure failed: missing block: B:272:0x00ab, code lost:
    
        r15 = r15.getVisibility();
     */
    /* JADX WARN: Code restructure failed: missing block: B:273:0x00af, code lost:
    
        if (r15 == 0) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:274:0x00b1, code lost:
    
        if (r15 == 4) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:275:0x00b3, code lost:
    
        if (r15 != 8) goto L238;
     */
    /* JADX WARN: Code restructure failed: missing block: B:276:0x00b5, code lost:
    
        r15 = r11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:279:0x00c0, code lost:
    
        throw new java.lang.IllegalArgumentException(k0.d.i(r15, "Unknown visibility "));
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x00c6, code lost:
    
        if (r10.a != r13) goto L240;
     */
    /* JADX WARN: Code restructure failed: missing block: B:280:0x00c1, code lost:
    
        r15 = r13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:282:0x00cc, code lost:
    
        r18 = r15;
        r8 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x00cf, code lost:
    
        r8 = (androidx.fragment.app.y1) r8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x00d5, code lost:
    
        if (androidx.fragment.app.FragmentManager.M(r18) == false) goto L51;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x00d7, code lost:
    
        android.util.Log.v("FragmentManager", "Executing operations from " + r4 + " to " + r8);
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x00f0, code lost:
    
        r15 = new java.util.ArrayList();
        r2 = new java.util.ArrayList();
        r5 = ((androidx.fragment.app.y1) kotlin.collections.CollectionsKt.Q(r31)).f2125c;
        r6 = r31.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x010a, code lost:
    
        if (r6.hasNext() == false) goto L241;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x010c, code lost:
    
        r7 = ((androidx.fragment.app.y1) r6.next()).f2125c.mAnimationInfo;
        r9 = r5.mAnimationInfo;
        r7.f1887b = r9.f1887b;
        r7.f1888c = r9.f1888c;
        r7.f1889d = r9.f1889d;
        r7.f1890e = r9.f1890e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x0129, code lost:
    
        r1 = r31.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x012d, code lost:
    
        r6 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x0134, code lost:
    
        if (r1.hasNext() == false) goto L242;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x0136, code lost:
    
        r5 = (androidx.fragment.app.y1) r1.next();
        r15.add(new androidx.fragment.app.h(r5, r32));
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x0146, code lost:
    
        if (r32 == false) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x0148, code lost:
    
        if (r5 != r4) goto L62;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x014a, code lost:
    
        r9 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x0152, code lost:
    
        r2.add(new androidx.fragment.app.r(r5, r32, r9));
        r7 = new androidx.fragment.app.d(r6, r30, r5);
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, "listener");
        r5.f2126d.add(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x014d, code lost:
    
        r9 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x014f, code lost:
    
        if (r5 != r8) goto L62;
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x0168, code lost:
    
        r1 = new java.util.ArrayList();
        r2 = r2.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0175, code lost:
    
        if (r2.hasNext() == false) goto L246;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x0177, code lost:
    
        r5 = r2.next();
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x0182, code lost:
    
        if (((androidx.fragment.app.r) r5).a() != false) goto L248;
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0184, code lost:
    
        r1.add(r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0188, code lost:
    
        r2 = new java.util.ArrayList();
        r1 = r1.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x0195, code lost:
    
        if (r1.hasNext() == false) goto L251;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x0197, code lost:
    
        r5 = r1.next();
     */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x01a2, code lost:
    
        if (((androidx.fragment.app.r) r5).b() == null) goto L253;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x01a4, code lost:
    
        r2.add(r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x01a8, code lost:
    
        r1 = r2.iterator();
        r5 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x01b1, code lost:
    
        if (r1.hasNext() == false) goto L255;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x01b3, code lost:
    
        r7 = (androidx.fragment.app.r) r1.next();
        r9 = r7.b();
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x01bd, code lost:
    
        if (r5 == null) goto L257;
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x01bf, code lost:
    
        if (r9 != r5) goto L256;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x01ec, code lost:
    
        throw new java.lang.IllegalArgumentException(("Mixing framework transitions and AndroidX transitions is not allowed. Fragment " + r7.a.f2125c + " returned Transition " + r7.f2092b + " which uses a different Transition type than other Fragments.").toString());
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x01ed, code lost:
    
        r5 = r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x01f1, code lost:
    
        if (r5 != null) goto L91;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x01f3, code lost:
    
        r0 = "FragmentManager";
        r26 = r11;
        r27 = r15;
        r15 = "effect";
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x0573, code lost:
    
        r1 = new java.util.ArrayList();
        r2 = new java.util.ArrayList();
        r3 = r27.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x0585, code lost:
    
        if (r3.hasNext() == false) goto L259;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x0587, code lost:
    
        kotlin.collections.h0.o(r2, ((androidx.fragment.app.h) r3.next()).a.k);
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x0595, code lost:
    
        r2 = r2.isEmpty();
        r3 = r27.iterator();
        r6 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x05a2, code lost:
    
        if (r3.hasNext() == false) goto L260;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x05a4, code lost:
    
        r4 = (androidx.fragment.app.h) r3.next();
        r7 = r30.a.getContext();
        r8 = r4.a;
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, "context");
        r7 = r4.b(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x05bd, code lost:
    
        if (r7 != null) goto L261;
     */
    @Override // androidx.fragment.app.c2
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b(ArrayList operations, boolean z5) {
        float f2;
        Object obj;
        a2 a2Var;
        Intrinsics.checkNotNullParameter(operations, "operations");
        int i5 = 2;
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Collecting Effects");
        }
        Iterator it = operations.iterator();
        while (true) {
            boolean hasNext = it.hasNext();
            a2 a2Var2 = a2.f1963i;
            a2 a2Var3 = a2.f1962e;
            a2 a2Var4 = a2.f1964v;
            if (!hasNext) {
                f2 = 0.0f;
                obj = null;
                break;
            }
            obj = it.next();
            f2 = 0.0f;
            y1 y1Var = (y1) obj;
            View view = y1Var.f2125c.mView;
            Intrinsics.checkNotNullExpressionValue(view, "operation.fragment.mView");
            Intrinsics.checkNotNullParameter(view, "<this>");
            if (view.getAlpha() != 0.0f || view.getVisibility() != 0) {
                int visibility = view.getVisibility();
                if (visibility == 0) {
                    a2Var = a2Var3;
                } else if (visibility != 4) {
                    if (visibility != 8) {
                        throw new IllegalArgumentException(k0.d.i(visibility, "Unknown visibility "));
                    }
                    a2Var = a2Var2;
                }
                if (a2Var != a2Var3 && y1Var.a != a2Var3) {
                    break;
                }
            }
            a2Var = a2Var4;
            if (a2Var != a2Var3) {
            }
        }
    }
}
