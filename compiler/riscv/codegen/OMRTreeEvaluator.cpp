/*******************************************************************************
 * Copyright (c) 2019, 2020 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

#include <riscv.h>
#include "codegen/RVInstruction.hpp"
#include "codegen/CodeGenerator.hpp"
#include "codegen/GenerateInstructions.hpp"
#include "codegen/Linkage.hpp"
#include "codegen/MemoryReference.hpp"
#include "codegen/RegisterDependency.hpp"
#include "codegen/TreeEvaluator.hpp"
#include "il/Node.hpp"
#include "il/Node_inlines.hpp"
#include "il/AutomaticSymbol.hpp"
#include "il/LabelSymbol.hpp"
#include "il/ParameterSymbol.hpp"

TR::Register*
OMR::RV::TreeEvaluator::BadILOpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::irdbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::frdbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::drdbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ardbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::brdbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::srdbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lrdbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iloadiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iloadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::floadiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::floadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dloadiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::dloadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::aloadiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::aloadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bloadiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::bloadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sloadiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::sloadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lloadiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::lloadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::irdbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::frdbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::drdbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ardbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::brdbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::srdbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lrdbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::astoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::lstoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iwrtbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lwrtbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fwrtbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dwrtbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bwrtbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::swrtbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lstoreiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::lstoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fstoreiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::fstoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dstoreiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::dstoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::astoreiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::lstoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bstoreiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::bstoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sstoreiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::sstoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::istoreiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::istoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lwrtbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fwrtbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dwrtbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::awrtbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bwrtbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::swrtbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iwrtbariEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::GotoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::gotoEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::areturnEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::lreturnEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ReturnEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::returnEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::athrowEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::icallEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::directCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lcallEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::directCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fcallEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::directCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dcallEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::directCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::acallEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::directCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::callEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::directCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::baddEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iaddEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::saddEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iaddEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bsubEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::isubEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ssubEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::isubEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::asubEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lmulEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::imulEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bmulEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::imulEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::smulEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::imulEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bdivEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::idivEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sdivEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::idivEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bremEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iremEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sremEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iremEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lnegEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::inegEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bnegEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::snegEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lshlEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ishlEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bshlEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ishlEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sshlEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ishlEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lshrEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ishrEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bshrEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ishrEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sshrEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ishrEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lushrEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iushrEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bushrEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iushrEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sushrEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iushrEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lrolEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::irolEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::landEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iandEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bandEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iandEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sandEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iandEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iorEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::borEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iorEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iorEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lxorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ixorEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bxorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ixorEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sxorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::ixorEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::i2bEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::l2iEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::i2sEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::l2iEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::i2aEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iu2fEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iu2dEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iu2aEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::l2bEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::l2iEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::l2sEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::l2iEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::l2aEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::passThroughEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lu2fEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lu2dEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lu2aEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::passThroughEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::f2bEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::f2sEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::b2fEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::b2sEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::b2aEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bu2fEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bu2dEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bu2sEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bu2aEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::s2fEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::s2bEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::s2aEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::su2fEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::su2aEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::a2iEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::a2lEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::passThroughEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::a2bEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::a2sEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::acmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::acmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::acmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::acmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::acmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bcmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bcmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bcmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bcmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bcmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bcmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bucmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bucmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bucmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bucmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::scmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::scmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::scmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::scmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::scmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::scmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sucmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sucmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sucmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sucmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fcmplEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::dcmplEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fcmpgEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::dcmpgEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpequEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpneuEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpltuEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpgeuEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpgtuEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iffcmpleuEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifdcmpneuEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifacmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iflcmpeqEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifacmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iflcmpneEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifacmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iflucmpltEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifacmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iflucmpgeEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifacmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iflucmpgtEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifacmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iflucmpleEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbcmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbcmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbcmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbcmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbcmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbcmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbucmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbucmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbucmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifbucmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifscmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifscmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifscmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifscmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifscmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifscmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifsucmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifsucmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifsucmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ifsucmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegLoadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::fRegLoadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegLoadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegLoadEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::aRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegStoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegStoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegStoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegStoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegStoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iRegStoreEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lselectEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iselectEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bselectEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iselectEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sselectEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iselectEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::aselectEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iselectEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::MethodEnterHookEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::MethodExitHookEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::PassThroughEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::passThroughEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::compressedRefsEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::viminEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vimaxEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vigetelemEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::visetelemEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vimergelEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vimergehEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpanyeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpanyneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpanygtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpanygeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpanyltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vicmpanyleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vnotEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vbitselectEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vpermEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vsplatsEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdmergelEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdmergehEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdsetelemEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdgetelemEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdselEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdmaxEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdminEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpalleqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpallneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpallgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpallgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpallltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpallleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpanyeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpanyneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpanygtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpanygeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpanyltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdcmpanyleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdsqrtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vnegEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vaddEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vsubEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vmulEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdivEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vandEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vxorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vcmpeqEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vcmpneEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vcmpltEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vcmpgtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vcmpleEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vcmpgeEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vloadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vloadiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vstoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vstoreiEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vreturnEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vcallEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vcalliEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vselectEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::v2vEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vl2vdEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vconstEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::getvelemEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vsetelemEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vbRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vsRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::viRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vlRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vfRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vbRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vsRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::viRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vlRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vfRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::vdRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::f2iuEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::f2luEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::f2buEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::f2cEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::d2iuEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::d2luEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::d2buEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::tstartEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::tfinishEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::tabortEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::NewEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::newvalueEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::newarrayEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::anewarrayEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::variableNewEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::variableNewArrayEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::multianewarrayEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::arraylengthEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::contigarraylengthEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::discontigarraylengthEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::icalliEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::indirectCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lcalliEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::indirectCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fcalliEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::indirectCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dcalliEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::indirectCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::acalliEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::indirectCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::calliEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::indirectCallEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fenceEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::luaddhEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::aiaddEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::laddEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::aladdEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::laddEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lusubhEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iumulhEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lmulhEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lumulhEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::CaseEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ResolveCHKEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::OverflowCHKEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::UnsignedOverflowCHKEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::BNDCHKwithSpineCHKEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::SpineCHKEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::long2StringEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bitOpMemEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::allocationFenceEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::loadFenceEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::storeFenceEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fullFenceEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::computeCCEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::butestEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sutestEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bucmpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bcmpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sucmpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::scmpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iucmpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::icmpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lucmpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ificmpoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ificmpnoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iflcmpoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iflcmpnoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ificmnoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ificmnnoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iflcmnoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iflcmnnoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iuaddcEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::luaddcEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iusubbEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lusubbEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::icmpsetEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lcmpsetEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bztestnsetEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ibatomicorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::isatomicorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::iiatomicorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ilatomicorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::branchEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::igotoEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fsqrtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dsqrtEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dfloorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ffloorEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::dceilEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::fceilEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lmaxEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::imaxEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lumaxEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iumaxEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lminEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iminEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::luminEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::iuminEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ihbitEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ilbitEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::inolzEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::inotzEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ipopcntEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lhbitEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::llbitEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lnolzEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lnotzEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lpopcntEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sbyteswapEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ibyteswapEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lbyteswapEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::bbitpermuteEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::sbitpermuteEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::ibitpermuteEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::lbitpermuteEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Register*
OMR::RV::TreeEvaluator::PrefetchEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return TR::TreeEvaluator::unImpOpEvaluator(node, cg);
   }

TR::Instruction *loadConstant32(TR::CodeGenerator *cg, TR::Node *node, int32_t value, TR::Register *trgReg, TR::Instruction *cursor)
   {
   TR::Instruction *insertingInstructions = cursor;
   if (cursor == NULL)
      cursor = cg->getAppendInstruction();

   if (VALID_ITYPE_IMM(value))
      {
      TR::Register *zero = cg->machine()->getRealRegister(TR::RealRegister::zero);
      cursor = generateITYPE(TR::InstOpCode::_addiw, node, trgReg, zero, value, cg);
      }
   else
      {
      /* Since value is too big to fit in 12bit immediate, we have to generate
         a sequence

           lui  trgReg, %hi(value)
           addi trgReg, trgReg, $lo(value)

        Since addi is signed add and sign-extends its 12bit immediate operand to
        XLEN bits, the value of %hi(value) has to be adjusted if sign-bit of
        %lo(value) is 1 (to compensate for fact that addi adds negative value).
      */
      uint32_t lo = (uint32_t)value & ~(0xFFFFFFFF << RISCV_IMM_BITS);
      uint32_t hi = (uint32_t)value & (0xFFFFFFFF << RISCV_IMM_BITS);

      if (lo & (1 << (RISCV_IMM_BITS - 1)))
         {
         hi += 1 << RISCV_IMM_BITS;
         }

      cursor = generateUTYPE(TR::InstOpCode::_lui, node, hi, trgReg, cg);
      cursor = generateITYPE(TR::InstOpCode::_addiw, node, trgReg, trgReg, lo, cg);
      }

   if (!insertingInstructions)
      cg->setAppendInstruction(cursor);

   return cursor;
   }

TR::Instruction *loadConstant64(TR::CodeGenerator *cg, TR::Node *node, int64_t value, TR::Register *trgReg, TR::Instruction *cursor)
   {
   TR::Instruction *insertingInstructions = cursor;
   if (cursor == NULL)
      cursor = cg->getAppendInstruction();

   if (INT32_MIN <= value && value <= INT32_MAX)
      {
      return loadConstant32(cg, node, value & 0xFFFFFFFF, trgReg, cursor);
      }
   else
      {
      int32_t lo32 = (int32_t)((uint64_t)value & 0xFFFFFFFF);
      int32_t hi32 = (int32_t)((uint64_t)value >> 32);
      if (lo32 < 0)
         {
         hi32 += 1;
         }

      cursor = loadConstant32(cg, node, lo32, trgReg, cursor);
      TR::Register *tmpReg = cg->allocateRegister();
      cursor = loadConstant32(cg, node, hi32, tmpReg, cursor);
      cursor = generateITYPE(TR::InstOpCode::_slli, node, tmpReg, tmpReg, 32, cg);
      cursor = generateRTYPE(TR::InstOpCode::_add, node, trgReg, tmpReg, trgReg, cg);
      cg->stopUsingRegister(tmpReg);
      }

   if (!insertingInstructions)
      cg->setAppendInstruction(cursor);

   return cursor;
   }

TR::Register *
OMR::RV::TreeEvaluator::unImpOpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	TR_ASSERT(false, "Opcode %s is not implemented\n", node->getOpCode().getName());
	return NULL;
	}

TR::Register *
OMR::RV::TreeEvaluator::badILOpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::badILOpEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *commonLoadEvaluator(TR::Node *node, TR::InstOpCode::Mnemonic op, int32_t memSize, TR::CodeGenerator *cg)
   {
   TR::Register *tempReg;
   bool needSync = (node->getSymbolReference()->getSymbol()->isSyncVolatile() && cg->comp()->target().isSMP());

   if (op == TR::InstOpCode::_flw)
      {
      tempReg = cg->allocateSinglePrecisionRegister();
      }
   else if (op == TR::InstOpCode::_fld)
      {
      tempReg = cg->allocateRegister(TR_FPR);
      }
   else
      {
      tempReg = cg->allocateRegister();
      }
   node->setRegister(tempReg);
   TR::MemoryReference *tempMR = new (cg->trHeapMemory()) TR::MemoryReference(node, memSize, cg);
   generateLOAD(op, node, tempReg, tempMR, cg);

   /*
    * Enable this part when dmb instruction becomes available
   if (needSync)
      {
      generateInstruction(cg, TR::InstOpCode::dmb, node);
      }
    */
   tempMR->decNodeReferenceCounts(cg);

   return tempReg;
   }

// also handles iloadi
TR::Register *
OMR::RV::TreeEvaluator::iloadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return commonLoadEvaluator(node, TR::InstOpCode::_lw, 4, cg);
   }

// also handles aloadi
TR::Register *
OMR::RV::TreeEvaluator::aloadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::Compilation *comp = cg->comp();
   TR::Register *tempReg;

   if (!node->getSymbolReference()->getSymbol()->isInternalPointer())
      {
      if (node->getSymbolReference()->getSymbol()->isNotCollected())
         tempReg = cg->allocateRegister();
      else
         tempReg = cg->allocateCollectedReferenceRegister();
      }
   else
      {
      tempReg = cg->allocateRegister();
      tempReg->setPinningArrayPointer(node->getSymbolReference()->getSymbol()->castToInternalPointerAutoSymbol()->getPinningArrayPointer());
      tempReg->setContainsInternalPointer();
      }

   node->setRegister(tempReg);

   TR::MemoryReference *tempMR = new (cg->trHeapMemory()) TR::MemoryReference(node, 8, cg);
   generateLOAD(TR::InstOpCode::_ld, node, tempReg, tempMR, cg);

   /*
    * Enable this part when dmb instruction becomes available
   bool needSync = (node->getSymbolReference()->getSymbol()->isSyncVolatile() && cg->comp()->target().isSMP());
   if (needSync)
      {
      generateInstruction(cg, TR::InstOpCode::dmb, node);
      }
    */
   tempMR->decNodeReferenceCounts(cg);

   return tempReg;
   }

// also handles lloadi
TR::Register *
OMR::RV::TreeEvaluator::lloadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return commonLoadEvaluator(node, TR::InstOpCode::_ld, 8, cg);
   }

// also handles bloadi
TR::Register *
OMR::RV::TreeEvaluator::bloadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return commonLoadEvaluator(node, TR::InstOpCode::_lb, 1, cg);
   }

// also handles sloadi
TR::Register *
OMR::RV::TreeEvaluator::sloadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return commonLoadEvaluator(node, TR::InstOpCode::_lh, 2, cg);
   }

TR::Register *
OMR::RV::TreeEvaluator::awrtbarEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::awrtbarEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *commonStoreEvaluator(TR::Node *node, TR::InstOpCode::Mnemonic op, int32_t memSize, TR::CodeGenerator *cg)
   {
   TR::MemoryReference *tempMR = new (cg->trHeapMemory()) TR::MemoryReference(node, memSize, cg);
   bool needSync = (node->getSymbolReference()->getSymbol()->isSyncVolatile() && cg->comp()->target().isSMP());
   TR::Node *valueChild;

   if (node->getOpCode().isIndirect())
      {
      valueChild = node->getSecondChild();
      }
   else
      {
      valueChild = node->getFirstChild();
      }

   /*
    * Enable this part when dmb instruction becomes available
   if (needSync)
      {
      generateInstruction(cg, TR::InstOpCode::dmb, node);
      }
    */
   generateSTORE(op, node, tempMR, cg->evaluate(valueChild), cg);
   /*
    * Enable this part when dmb instruction becomes available
   if (needSync)
      {
      generateInstruction(cg, TR::InstOpCode::dmb, node);
      }
    */

   valueChild->decReferenceCount();
   tempMR->decNodeReferenceCounts(cg);

   return NULL;
   }

// also handles lstorei, astore, astorei
TR::Register *
OMR::RV::TreeEvaluator::lstoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return commonStoreEvaluator(node, TR::InstOpCode::_sd, 8, cg);
   }

// also handles bstorei
TR::Register *
OMR::RV::TreeEvaluator::bstoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return commonStoreEvaluator(node, TR::InstOpCode::_sb, 1, cg);
   }

// also handles sstorei
TR::Register *
OMR::RV::TreeEvaluator::sstoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return commonStoreEvaluator(node, TR::InstOpCode::_sh, 2, cg);
   }

// also handles istorei
TR::Register *
OMR::RV::TreeEvaluator::istoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   return commonStoreEvaluator(node, TR::InstOpCode::_sw, 4, cg);
   }

TR::Register *
OMR::RV::TreeEvaluator::monentEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::monentEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::monexitEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::monexitEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::monexitfenceEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::monexitfenceEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::arraytranslateAndTestEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::arraytranslateAndTestEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::arraytranslateEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::arraytranslateEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::arraysetEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::arraysetEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::arraycmpEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::arraycmpEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::arraycopyEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::arraycopyEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::asynccheckEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::asynccheckEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::instanceofEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::instanceofEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::checkcastEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::checkcastEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::checkcastAndNULLCHKEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::checkcastAndNULLCHKEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

// handles call, icall, lcall, fcall, dcall, acall
TR::Register *
OMR::RV::TreeEvaluator::directCallEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::SymbolReference *symRef = node->getSymbolReference();
   TR::MethodSymbol *callee = symRef->getSymbol()->castToMethodSymbol();

   // FIXME: How comes here we get private linkage?
   // TR::Linkage *linkage = cg->getLinkage(callee->getLinkageConvention());
   TR::Linkage *linkage = cg->getLinkage(TR_System);

   return linkage->buildDirectDispatch(node);
   }

// handles calli, icalli, lcalli, fcalli, dcalli, acalli
TR::Register *
OMR::RV::TreeEvaluator::indirectCallEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::SymbolReference *symRef = node->getSymbolReference();
   TR::MethodSymbol *callee = symRef->getSymbol()->castToMethodSymbol();

   // FIXME: How comes here we get private linkage?
   // TR::Linkage *linkage = cg->getLinkage(callee->getLinkageConvention());
   TR::Linkage *linkage = cg->getLinkage(TR_System);

   return linkage->buildIndirectDispatch(node);
   }



TR::Register *
OMR::RV::TreeEvaluator::treetopEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::Register *tempReg = cg->evaluate(node->getFirstChild());
   cg->decReferenceCount(node->getFirstChild());
   return tempReg;
   }

TR::Register *
OMR::RV::TreeEvaluator::exceptionRangeFenceEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::exceptionRangeFenceEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::loadaddrEvaluator(TR::Node *node, TR::CodeGenerator *cg)
	{
	// TODO:RV: Enable TR::TreeEvaluator::loadaddrEvaluator in compiler/aarch64/codegen/TreeEvaluatorTable.hpp when Implemented.
	return OMR::RV::TreeEvaluator::unImpOpEvaluator(node, cg);
	}

TR::Register *
OMR::RV::TreeEvaluator::aRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::Register *globalReg = node->getRegister();

   if (globalReg == NULL)
      {
      if (node->getRegLoadStoreSymbolReference()->getSymbol()->isNotCollected() ||
          node->getRegLoadStoreSymbolReference()->getSymbol()->isInternalPointer())
         {
         globalReg = cg->allocateRegister();
         if (node->getRegLoadStoreSymbolReference()->getSymbol()->isInternalPointer())
            {
            globalReg->setContainsInternalPointer();
            globalReg->setPinningArrayPointer(node->getRegLoadStoreSymbolReference()->getSymbol()->castToInternalPointerAutoSymbol()->getPinningArrayPointer());
            }
         }
      else
         {
         globalReg = cg->allocateCollectedReferenceRegister();
         }

      node->setRegister(globalReg);
      }
   return globalReg;
   }

// Also handles sRegLoad, bRegLoad, and lRegLoad
TR::Register *
OMR::RV::TreeEvaluator::iRegLoadEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::Register *globalReg = node->getRegister();

   if (globalReg == NULL)
      {
      globalReg = cg->allocateRegister();
      node->setRegister(globalReg);
      }
   return(globalReg);
   }

// Also handles sRegStore, bRegStore, lRegStore, and aRegStore
TR::Register *
OMR::RV::TreeEvaluator::iRegStoreEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::Node *child = node->getFirstChild();
   TR::Register *globalReg = cg->evaluate(child);
   cg->decReferenceCount(child);
   return globalReg;
   }

TR::Register *
OMR::RV::TreeEvaluator::GlRegDepsEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   int32_t i;

   for (i = 0; i < node->getNumChildren(); i++)
      {
      cg->evaluate(node->getChild(i));
      cg->decReferenceCount(node->getChild(i));
      }
   return NULL;
   }

TR::Register *
OMR::RV::TreeEvaluator::BBStartEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::Compilation *comp = cg->comp();
   TR::Block *block = node->getBlock();
   cg->setCurrentBlock(block);

   TR::RegisterDependencyConditions *deps = NULL;

   if (!block->isExtensionOfPreviousBlock() && node->getNumChildren()>0)
      {
      int32_t i;
      TR::Node *child = node->getFirstChild();
      cg->evaluate(child);
      deps = generateRegisterDependencyConditions(cg, child, 0);
      if (cg->getCurrentEvaluationTreeTop() == comp->getStartTree())
         {
         for (i=0; i<child->getNumChildren(); i++)
            {
            TR::ParameterSymbol *sym = child->getChild(i)->getSymbol()->getParmSymbol();
            if (sym != NULL)
               {
               sym->setAssignedGlobalRegisterIndex(cg->getGlobalRegister(child->getChild(i)->getGlobalRegisterNumber()));
               }
            }
         }
      child->decReferenceCount();
      }

   if (node->getLabel() != NULL)
      {
      node->getLabel()->setInstruction(generateLABEL(cg, TR::InstOpCode::label, node, node->getLabel(), deps));
      }

   TR::Node *fenceNode = TR::Node::createRelative32BitFenceNode(node, &block->getInstructionBoundaries()._startPC);
   TR::Instruction *fence = generateADMIN(cg, TR::InstOpCode::fence, node, fenceNode);

   if (block->isCatchBlock())
      {
      cg->generateCatchBlockBBStartPrologue(node, fence);
      }

   return NULL;
   }

TR::Register *
OMR::RV::TreeEvaluator::BBEndEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::Block *block = node->getBlock();
   TR::Compilation *comp = cg->comp();
   TR::Node *fenceNode = TR::Node::createRelative32BitFenceNode(node, &node->getBlock()->getInstructionBoundaries()._endPC);

   if (NULL == block->getNextBlock())
      {
      TR::Instruction *lastInstruction = cg->getAppendInstruction();
      TR::InstOpCode::Mnemonic lastInstructionOp = lastInstruction->getOpCodeValue();
      if ((lastInstructionOp == TR::InstOpCode::_jal || lastInstructionOp == TR::InstOpCode::_jalr)
              && 0 /* TODO: check that jump stores return address into some register (not x0 / zero) */
              && lastInstruction->getNode()->getSymbolReference()->getReferenceNumber() == TR_aThrow)
         {
         lastInstruction = generateInstruction(cg, TR::InstOpCode::bad, node, lastInstruction);
         }
      }

   TR::TreeTop *nextTT = cg->getCurrentEvaluationTreeTop()->getNextTreeTop();

   TR::RegisterDependencyConditions *deps = NULL;
   if (node->getNumChildren() > 0 &&
       (!nextTT || !nextTT->getNode()->getBlock()->isExtensionOfPreviousBlock()))
      {
      TR::Node *child = node->getFirstChild();
      cg->evaluate(child);
      deps = generateRegisterDependencyConditions(cg, child, 0);
      child->decReferenceCount();
      }

   // put the dependencies (if any) on the fence
   generateADMIN(cg, TR::InstOpCode::fence, node, deps, fenceNode);

   return NULL;
   }

// handles l2a, lu2a, a2l
TR::Register *
OMR::RV::TreeEvaluator::passThroughEvaluator(TR::Node *node, TR::CodeGenerator *cg)
   {
   TR::Node *child = node->getFirstChild();
   TR::Register *trgReg = cg->evaluate(child);
   child->decReferenceCount();
   node->setRegister(trgReg);
   return trgReg;
   }
